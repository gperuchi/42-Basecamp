/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:23:12 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 17:23:15 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <unistd.h>
#include "ft_stock_str.h"

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		ft_recursive(int nb)
{
	char	aux;

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

void		ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_recursive(nb);
}

void		ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
