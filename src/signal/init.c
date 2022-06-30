/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:09:08 by fchrysta          #+#    #+#             */
/*   Updated: 2022/06/30 21:40:27 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "minishell.h"

void	sighandler

void	init_sighandler()
{
	struct sigaction	sa;
	int					a;

	sa.sa_sigaction = sig_handler;
	sigaction(SIGINT, &sa, NULL);
}
