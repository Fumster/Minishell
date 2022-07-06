/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:19:16 by fchrysta          #+#    #+#             */
/*   Updated: 2022/07/06 23:51:40 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

void parse_input(char *input)
{
	char *string;
	t_token	token;
	
	string = ft_strtrim(input, " ");
	token.type = TARGUMENT;
	printf ("token pipe is %d\n", token.type);
	printf ("string after trim - <%s>\n", string);
	free (string);
}
