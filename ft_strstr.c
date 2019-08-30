/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:31:35 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/21 11:23:41 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *hay, const char *need)
{
	int		i;
	int		j;
	char	*haystack;
	char	*needle;

	haystack = (char *)hay;
	needle = (char *)need;
	i = 0;
	if (!*needle)
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
