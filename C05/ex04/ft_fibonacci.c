/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:40:23 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:54:56 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

int		ft_fibonacci(int index)
{
	int fibonacci;

	fibonacci = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fibonacci = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibonacci);
}
