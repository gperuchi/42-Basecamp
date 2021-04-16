/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:56:03 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:55:42 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	while (i < argc && i > 0)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
