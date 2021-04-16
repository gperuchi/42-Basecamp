/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:16:09 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/06 17:00:40 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	aux;
	char	hex1;
	char	hex2;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			aux = str[i];
			hex1 = "0123456789abcdef"[aux / 16];
			hex2 = "0123456789abcdef"[aux % 16];
			write(1, "\\", 1);
			write(1, &hex1, 1);
			write(1, &hex2, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
