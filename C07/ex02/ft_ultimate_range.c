/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:48:58 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:56:17 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	size;
	int *buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	buffer = *range;
	while (i < size)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return (size);
}
