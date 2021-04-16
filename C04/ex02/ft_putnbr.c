/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:54:42 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/13 00:56:19 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int nb)
{
	char aux;

	if (nb == -2147483648)
	{
		nb = 147483648;
		write(1, "-2", 2);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", sizeof(char));
	}
	if (nb == 0)
	{
		return ;
	}
	ft_recursive(nb / 10);
	aux = (nb % 10) + '0';
	write(1, &aux, sizeof(char));
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_recursive(nb);
}
