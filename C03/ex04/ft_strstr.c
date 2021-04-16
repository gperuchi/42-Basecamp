/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:41:38 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/08 18:51:48 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *aux;

	if (to_find[0] == '\0')
		return (str);
	while (*to_find != '\0' && *str != '\0')
	{
		if (*to_find != *str)
			str++;
		else
		{
			begin = str;
			aux = to_find;
			while (*to_find == *str && *to_find != '\0')
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (begin);
			to_find = aux;
		}
	}
	return (0);
}
