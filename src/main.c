/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 12:55:07 by pconin            #+#    #+#             */
/*   Updated: 2016/09/26 18:14:52 by pconin           ###   ########.fr       */
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
	t_env	s;


	s.gnl_ret = 0;
	s.gnl_input = NULL;
	int i = 0;
	while (env[++i])
		ft_putendl(env[i]);

	while (signal(SIGINT, sig_handler) != SIG_ERR)
	{
		ft_putstr("minishell$> ");
		while ((s.gnl_ret = get_next_line(0, &s.gnl_input)) == 0)
			;
		if (s.gnl_ret == -1)
			ft_error("gnl error");
		s.prompt = ft_strsplit(s.gnl_input, ' ');
		parser(&s);
	}
	return (0);
}
