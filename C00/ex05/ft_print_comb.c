/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:13:25 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:46:22 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <unistd.h>

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8' && c < d)
		{
			u = d + 1;
			while (u <= '9' && d < u)
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c != '7' || d != '8' || u != '9')
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
