/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:13:08 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 17:01:52 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		j;
	size_t	nrep;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && n)
	{
		j = 0;
		nrep = n;
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (!nrep)
				break ;
			if (!needle[j + 1])
				return ((char *)&haystack[i]);
			j++;
			nrep--;
		}
		i++;
		n--;
	}
	return (NULL);
}
