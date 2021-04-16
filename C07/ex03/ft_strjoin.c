/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:57:36 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:56:34 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//SIGABORT

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*str;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(sep) + ft_strlen(strs[i]);
		i++;
	}
	str = malloc(total * sizeof(char));
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
