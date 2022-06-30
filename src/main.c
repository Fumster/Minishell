/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <fchrysta@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:28:56 by fchrysta          #+#    #+#             */
/*   Updated: 2022/06/30 21:41:04 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minishell.h"

int	main(void)
{
	char *input;
	signal(SIGINT, NULL);
	while (1)
	{
		input = readline("MYSHELL $ ");
		if (!input)
			break;
		add_history(input);
		printf("input is %s\n", input);
		free (input);
	}
	printf("Exiting\n");
	return (0);
}
