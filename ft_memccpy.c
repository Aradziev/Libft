/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:05:45 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/21 09:03:01 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		if (tmp2[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
