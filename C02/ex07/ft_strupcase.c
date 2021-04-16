/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 22:56:41 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:50:50 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <string.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = str[i];
		if (aux >= 97 && aux <= 122)
		{
			str[i] = aux - 32;
		}
		i++;
	}
	return (str);
}
