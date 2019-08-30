/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 12:30:10 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/19 14:06:18 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iswhite(char *s)
{
	if (*s == ' ' || *s == '\n' || *s == '\t')
		return (1);
	return (0);
}

static char	*ft_put(char *res, char *s, int size)
{
	int i;

	i = 0;
	while (iswhite(s))
		s++;
	while (size != 0)
	{
		res[i] = s[i];
		i++;
		size--;
	}
	res[i] = '\0';
	return (res);
}

static int	ft_size(char *string2)
{
	int i;
	int g;

	i = 0;
	g = 0;
	while (iswhite(string2))
		string2++;
	while (*string2)
	{
		string2++;
		i++;
	}
	string2--;
	while (iswhite(string2))
	{
		g++;
		string2--;
	}
	return (i - g);
}

static int	fullblank(char const *string)
{
	while (*string == ' ' || *string == '\n' || *string == '\t')
	{
		string++;
		if (*string == '\0')
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *string)
{
	char	*res;
	int		size;
	char	*tmp;
	char	*string2;

	if (!string)
		return (NULL);
	string2 = (char*)string;
	tmp = (char*)string;
	size = ft_size(string2);
	if (fullblank(string))
	{
		res = (char*)malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	res = (char*)malloc(sizeof(char) * ((size) + 1));
	if (res == NULL)
		return (NULL);
	return (ft_put(res, tmp, size));
}
