/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:03:40 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 14:03:40 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;

	if (size == 0)
		return (NULL);
	tmp = (void *)malloc(size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
