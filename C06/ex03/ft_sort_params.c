/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:04:27 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:55:48 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int aux;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			aux = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (aux);
		}
		i++;
	}
	return (0);
}

int		ft_print(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		aux;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			aux = ft_strcmp(argv[i], argv[i + 1]);
			if (aux > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
	ft_print(argc, argv);
}
