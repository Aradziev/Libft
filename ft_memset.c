/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:13:07 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/20 10:23:11 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	char			*tmp;
	unsigned char	cnew;

	cnew = (unsigned char)c;
	tmp = str;
	i = 0;
	while (n)
	{
		tmp[i] = cnew;
		i++;
		n--;
	}
	return (str);
}
