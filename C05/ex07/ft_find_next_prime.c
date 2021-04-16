/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:58:12 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/13 20:01:18 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
