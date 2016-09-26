/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 12:55:07 by pconin            #+#    #+#             */
/*   Updated: 2016/09/26 15:48:50 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	sig_handler(int signo)
{
	if (signo == SIGINT)
	{
		ft_putendl("Ctrl-C signal catch, KILL MINISHELL");
		exit(0);
	}
}

int		main(int argc, char **argv, char **env)
{
	char *input;
	int ret;

	ret = 0;
	input = NULL;
	while (signal(SIGINT, sig_handler) != SIG_ERR)
	{
		ft_putstr("minishell$> ");
		while ((ret = get_next_line(0, &input)) == 0)
			;
		if (ret == -1)
			ft_error("gnl error");
		ft_putstr(input);
	}
	return (0);
}
