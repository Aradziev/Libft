/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:35:22 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 17:51:03 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (src[g] != '\0' && n != 0)
	{
		dest[i] = src[g];
		i++;
		g++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
