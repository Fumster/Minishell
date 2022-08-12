/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:36:04 by fchrysta          #+#    #+#             */
/*   Updated: 2022/08/12 18:51:06 by fchrysta         ###   ########.fr       */
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

typedef enum	e_types
{
	TCOMMAND,
	TARGUMENT
	TQUOTE,
	TREDIRECT,
	TDOUBLE_REDIRECT,
	TPIPE,
}				t_types;

typedef struct	s_token
{
	t_types			type;
	char			value[100];
	struct s_token	*next;
}					t_token;

extern t_global	g_global;

void	init_sighandler(void);
void 	parse_input(char *input);

#endif
