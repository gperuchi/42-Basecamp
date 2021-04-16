/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:19:57 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 17:23:05 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int					i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char					*ft_strdup(char *src)
{
	char				*dest;
	int					size;
	int					i;

	i = 0;
	size = ft_strlen(src);
	dest = malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].str = malloc(ft_strlen(av[i]) * sizeof(char));
		tab[i].str = ft_strdup(av[i]);
		if (tab[i].str == NULL)
			return (0);
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
