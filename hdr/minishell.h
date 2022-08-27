/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:04 by fchrysta          #+#    #+#             */
/*   Updated: 2022/08/27 16:04:55 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINISHELL_H
# define MINISHELL_H
# include"libft.h"
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<signal.h>
# include<readline/readline.h>
# include<readline/history.h>

typedef struct s_global
{
	int		exitcode;
}			t_global;

typedef enum	e_way
{
	STD,
	PIP,
	FIL,
	HRD,
}				t_way;

typedef struct	s_cmd
{
	char			cmd[20];
	char			arg[100];
	t_way			input;
	t_way			output;
	char			filename[30];
	struct s_cmd	*next;
}					t_cmd;

extern t_global	g_global;

void	init_sighandler(void);
void 	parse_input(char *input);

#endif
