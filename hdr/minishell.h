/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:04 by fchrysta          #+#    #+#             */
/*   Updated: 2022/07/02 19:43:41 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef		MINISHELL_H
# define	MINISHELL_H
# include"libft.h"
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<signal.h>
# include<readline/readline.h>
# include<readline/history.h>

typedef struct	s_global
{
	int		exitcode;
	char	prompt[30];
}			t_global;

extern t_global g_global;

void	init_sighandler();

#endif
