/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:17:47 by cormund           #+#    #+#             */
/*   Updated: 2019/06/03 18:46:17 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	error()
{
	ft_putendl("error");
	exit(1);
}

int		main(int ac, char **av)
{
	t_f	*f;

	f = ft_read_map(av[1]);
	ft_new_init(f);
}