/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 19:48:47 by cormund           #+#    #+#             */
/*   Updated: 2019/09/30 19:49:02 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_shared.h"

void			error(char *error)
{
	if (error)
		write(1, error, ft_strlen(error));
	exit(-1);
}