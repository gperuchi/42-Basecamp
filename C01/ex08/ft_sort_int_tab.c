/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:36:02 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:48:11 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int count2;
	int temp;

	count = 0;
	while (count < size)
	{
		count2 = 0;
		while (count2 < size)
		{
			if (tab[count2] > tab[count2 + 1])
			{
				temp = tab[count2 + 1];
				tab[count2 + 1] = tab[count2];
				tab[count2] = temp;
			}
			count2++;
		}
		count++;
	}
}
