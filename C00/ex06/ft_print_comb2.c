/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:47:59 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/02 00:26:30 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char a;
	char b;
	char x;
	char y;

	a = '0' - 1;
	b = '0' - 1;
	x = '0' - 1;
	y = '0';
	while (a++ < '9')
	{
		while (b++ < '9')
		{
			while (x++ < '9')
			{
				while (y++ < '9')
				{
					ft_write_number(a, b, x, y);
				}
				y = '0' - 1;
			}
			x = '0' - 1;
		}
		b = '0' - 1;
	}
}

void	ft_write_number(char a, char b, char x, char y)
{
	if ((a < x) || (a <= x && b < y))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &x, 1);
		write(1, &y, 1);
		if (a != '9' || b != '8' || x != '9' || y != '9')
			write(1, ", ", 2);
	}
}
