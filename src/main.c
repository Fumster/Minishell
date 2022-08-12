/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:28:56 by fchrysta          #+#    #+#             */
/*   Updated: 2022/07/09 19:17:29 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

t_global	g_global;

int	main(void)
{
	char	*input;

	g_global.exitcode = 0;
	init_sighandler();
	while (1)
	{
		input = readline("MINISHELL $ ");
		if (!input)
			break ;
		if (input[0] == '\0')
		{
			free(input);
			continue;
		}
		add_history(input);
		printf("input is <%s>\n", input);
		parse_input(input);
		free (input);
	}
	printf("Exiting \n");
	return (0);
}
