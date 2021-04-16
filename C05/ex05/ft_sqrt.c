/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:56:26 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:55:02 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

int		ft_is_prime2(int nb)
{
	int i;

	i = 5;
	if (nb < 2)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;

	n = nb;
	if (nb >= 2147483630)
		return (2147483647);
	if (nb < 3)
		return (2);
	while (ft_is_prime2(n) != 1)
		n++;
	return (n);
}

int		ft_sqrt(int nb)
{
	int i;
	int div;
	int count;
	int sqrt;

	if (nb <= 0)
		return (0);
	i = 2;
	sqrt = 1;
	div = nb;
	while (div != 1)
	{
		count = 0;
		while (div % i == 0 && div != 0)
		{
			div = div / i;
			count++;
		}
		if (count % 2 != 0)
			return (0);
		else if (count != 0)
			sqrt = sqrt * ft_iterative_power(i, count / 2);
		i = ft_find_next_prime(i + 1);
	}
	return (sqrt);
}
