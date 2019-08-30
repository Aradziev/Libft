/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:13:07 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/30 16:02:01 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	tmp = (unsigned char *)str;
	i = 0;
	while (n)
	{
		tmp[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}
