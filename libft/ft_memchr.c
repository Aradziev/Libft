/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 18:39:50 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/20 11:35:56 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int g, size_t n)
{
	unsigned char	*tmp;
	int				i;
	unsigned char	gnew;

	i = 0;
	gnew = (unsigned char)g;
	tmp = (unsigned char *)str;
	while (n)
	{
		if (tmp[i] == gnew)
			return (tmp + i);
		i++;
		n--;
	}
	return (0);
}
