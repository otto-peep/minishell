/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:15:21 by pconin            #+#    #+#             */
/*   Updated: 2016/09/26 16:39:30 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	parser(t_env *s)
{
	if (ft_strcmp(s->prompt[0], "ls") == 0)
		ft_putstr("ca marche");
}