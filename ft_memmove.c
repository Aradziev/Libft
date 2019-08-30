/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:48:31 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/30 14:27:48 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tdest;
	char	*tsrc;

	tsrc = (char *)src;
	tdest = (char *)dest;
	if (tsrc < tdest)
		while (n)
		{
			*(tdest + n - 1) = *(tsrc + n - 1);
			n--;
		}
	else
		ft_memcpy(tdest, tsrc, n);
	return (tdest);
}
