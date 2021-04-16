/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:50:29 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:54:37 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

int		ft_recursive_factorial(int nb)
{
	int fat;

	fat = 1;
	if (nb == 0)
		return (1);
	while (nb >= 0)
	{
		fat = nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
		return (fat);
	}
	return (0);
}
