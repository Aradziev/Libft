/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:48:31 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/30 11:38:58 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tdest;
	char	*tsrc;
	size_t	i;

	i = -1;
	tsrc = (char *)src;
	tdest = (char *)dest;
	if (tsrc < tdest)
		while ((int)(--n) >= 0)
			*(tdest + n) = *(tsrc + n);
	else
		while (++i < n)
			*(tdest + i) = *(tsrc + i);
	return (dest);
}
