/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:35:28 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/19 11:46:54 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		total;
	int		i;

	if (s)
	{
		i = 0;
		total = (int)len;
		res = (char*)malloc(sizeof(char) * (total + 1));
		if (res == NULL)
			return (NULL);
		while (total)
		{
			res[i] = s[start];
			i++;
			start++;
			total--;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
