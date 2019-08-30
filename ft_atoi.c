/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:47:08 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 18:35:45 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	res;
	int				ifneg;

	res = 0;
	ifneg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			ifneg = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res += (*str - '0');
		if (*(str + 1) && ft_isdigit(*(str + 1)))
			res *= 10;
		str++;
	}
	if (ifneg)
		return (res * -1);
	else
		return (res);
}
