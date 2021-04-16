/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 00:29:35 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:46:02 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//KO

#include <unistd.h>

void	ft_putnbr(int nb)
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
		return;
	}
	ft_putnbr(nb / 10);
	aux = (nb % 10) + 48;
	write(1, &aux, sizeof(char));
	return ;
}
