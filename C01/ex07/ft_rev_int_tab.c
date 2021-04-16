/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:11:54 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:48:04 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int temp[size];

	count = size - 1;
	count2 = 0;
	while (count >= 0)
	{
		temp[count2] = tab[count];
		count2++;
		count--;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = temp[count];
		count++;
	}
}
