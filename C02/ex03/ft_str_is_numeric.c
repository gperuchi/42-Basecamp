/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:18:49 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:51:22 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <string.h>

int		ft_str_is_numeric(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (!(aux >= '0' && aux <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
