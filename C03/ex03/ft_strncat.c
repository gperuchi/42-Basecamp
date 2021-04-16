/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:32:25 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/07 20:07:39 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (n < nb && src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	if (n == nb && src[n] != '\0')
		dest[i + n + 1] = '\0';
	dest[i + n] = '\0';
	return (dest);
}
