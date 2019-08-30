/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:03:00 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/19 12:00:46 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isc(char *s, char c)
{
	if (*s == c)
		return (1);
	return (0);
}

static int	ft_indvstrlen(char *s, char c)
{
	int strlen;

	strlen = 0;
	while (*s && *s != c)
	{
		strlen++;
		s++;
	}
	return (strlen);
}

static int	ft_wrdcnt(char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**ft_final(char **res, char *s, char c)
{
	int		i;
	int		g;
	int		indvstrlen;

	g = 0;
	while (*s)
	{
		i = 0;
		indvstrlen = ft_indvstrlen(s, c);
		res[g] = (char*)malloc(sizeof(char) * (indvstrlen + 1));
		while (indvstrlen != 0)
		{
			res[g][i] = *s;
			i++;
			s++;
			indvstrlen--;
		}
		res[g][i] = '\0';
		g++;
		while (ft_isc(s, c))
			s++;
	}
	res[g] = (NULL);
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char**)malloc(sizeof(char*) * (ft_wrdcnt((char*)s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (ft_isc((char*)s, c))
		s++;
	return (ft_final(res, (char*)s, c));
}
