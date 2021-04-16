/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:48:48 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/06 18:44:48 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (str[i] >= 97 && str[i] <= 122)
		{
			//if (i == 0)
			//	str[i] = aux -32;
			if (str[i - 1] >= 32 && str[i - 1] <= 47)
				str[i] = aux - 32;
		}
		i++;
	}
	return (str);
}
