/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:27:26 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:51:15 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <string.h>

int		ft_str_is_lowercase(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (!(aux >= 'a' && aux <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
