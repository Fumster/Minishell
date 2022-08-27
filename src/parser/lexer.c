/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:19:16 by fchrysta          #+#    #+#             */
/*   Updated: 2022/08/27 16:06:14 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

void parse_input(char *input)
{
	char *string;
	t_token	token;
	
	string = ft_strtrim(input, " ");
	free (string);
}
