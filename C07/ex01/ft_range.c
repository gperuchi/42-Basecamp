/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:01:23 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/14 19:33:38 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int	size;
	int	*range;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	range = malloc(size * sizeof(int));
	if (range == NULL)
		return (0);
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
