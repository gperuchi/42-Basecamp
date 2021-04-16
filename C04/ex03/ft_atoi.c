/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:57:29 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/16 15:53:58 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//OK

int		ft_atoi(char *str)
{
	int n;
	int num;

	n = 0;
	num = 0;
	while (*str != '\0' && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	while (*str != '\0' && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			n++;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (num != 0)
			num *= 10;
		num += (int)*str - '0';
		str++;
	}
	if (n % 2 != 0)
		return (-num);
	return (num);
}
