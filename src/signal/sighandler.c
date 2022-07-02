/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sighandler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:09:08 by fchrysta          #+#    #+#             */
/*   Updated: 2022/07/02 20:41:23 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	sighandler(int sig, siginfo_t *info, void *oldact)
{
	int	len;

	(void)oldact;
	(void)info;
	if (sig == SIGINT)
	{
		rl_replace_line("", 0);
		len = ft_strlen(g_global.prompt);
		write(1, &g_global.prompt, len);
		write(1, "                  \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 36);
		write(1, "\n", 1);
		rl_on_new_line();
		rl_redisplay();
		rl_replace_line("", 0);
		g_global.exitcode = 1;
		return ;
	}
	if (sig == SIGQUIT)
	{
		rl_on_new_line();
		rl_redisplay();
		write(1, "  \b\b", 4);
		return ;
	}
}

void	init_sighandler()
{
	struct sigaction	action;
	struct sigaction	oldaction;

	action.sa_sigaction = sighandler;
	action.sa_flags = SA_SIGINFO;
	sigaction(SIGINT, &action, &oldaction);
	sigaction(SIGQUIT, &action, &oldaction);
}
