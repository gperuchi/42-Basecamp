/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:27:59 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/13 02:13:22 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

int		ft_base_validation(char *base)
{
	int		aux;
	int		i;
	int		count;

	aux = ft_strlen(base);
	if (aux == 0 || aux == 1)
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		i = 0;
		count = 0;
		while (base[i] != '\0')
		{
			if (base[i] == *base)
				count++;
			i++;
		}
		if (count > 1)
			return (0);
		base++;
	}
	return (1);
}

void	ft_translate(int nbr, int size, char *base)
{
	if (nbr == -2147483648)
	{
		ft_translate(nbr / size, size, base);
		ft_putchar2(base[-(nbr % size)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar2('-');
		ft_translate(-nbr, size, base);
		return ;
	}
	if (nbr > size - 1)
		ft_translate(nbr / size, size, base);
	ft_putchar2(base[nbr % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	if (ft_base_validation(base) == 1)
	{
		size = ft_strlen(base);
		ft_translate(nbr, size, base);
	}
}
