/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:35:10 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/18 18:37:19 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = dest;
	if (src[i] == '\0')
		dest[i] = src[i];
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			dest[i] = '\0';
	}
	return (tmp);
}
