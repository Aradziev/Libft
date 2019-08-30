/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:39:23 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/20 17:51:09 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src,
		size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src) + ft_strlen(dest);
	if (dstsize <= ft_strlen(dest))
		return (ft_strlen(src) + dstsize);
	while (*dest)
		dest++;
	while ((i < dstsize - (len - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
