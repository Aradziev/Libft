/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:00:17 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 17:10:28 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	int					i;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	i = 0;
	if (!n)
		return (0);
	while (n--)
	{
		if (s1[i] != s2[i])
			break ;
		if (n)
			i++;
	}
	return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
}
