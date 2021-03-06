/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:00:53 by cormund           #+#    #+#             */
/*   Updated: 2019/04/05 11:55:20 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
