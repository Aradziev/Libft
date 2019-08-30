/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:51:03 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/27 18:29:52 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;

	i = 0;
	if (!n)
		return (0);
	while (n--)
	{
		if (str1[i] != str2[i])
			break ;
		if (n && str1[i] && str2[i])
			i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
