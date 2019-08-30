/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:00:28 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/21 09:16:02 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char*)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	res[i] = '\0';
	return (res);
}
