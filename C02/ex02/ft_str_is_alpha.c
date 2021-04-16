/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:47:48 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:51:28 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <string.h>

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (!((aux >= 'a' && aux <= 'z') || (aux >= 'A' && aux <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
