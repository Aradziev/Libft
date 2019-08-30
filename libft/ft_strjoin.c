/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:04:29 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/19 11:57:23 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*dothings(char const *s1, char const *s2, int length)
{
	char	*res;
	int		i;

	i = 0;
	res = (char*)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	while (*s1)
	{
		res[i] = (char)*s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		res[i] = (char)*s2;
		i++;
		s2++;
	}
	res[i] = '\0';
	return (res);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		length;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	return (dothings(s1, s2, length));
}
