/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:08:59 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:55:30 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 1 - 0;
	while (*argv[0] != '\0')
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
