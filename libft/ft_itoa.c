/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:13:58 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/27 12:59:17 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_xfer(char *res, int size, unsigned int n)
{
	while (size >= 0)
	{
		res[size] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static char	*ft_ifzero(int n)
{
	char *res;

	if (n == 0)
	{
		res = (char*)malloc(sizeof(char) * (2));
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	return (0);
}

static int	ft_size(unsigned int g)
{
	int size;

	size = 0;
	while (g > 0)
	{
		g = g / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int nb)
{
	char			*res;
	int				size;
	int				isneg;
	unsigned int	n;

	n = nb;
	if (n == 0)
		return (ft_ifzero(n));
	isneg = ft_isneg(nb);
	if (isneg)
		n = -nb;
	size = ft_size(n) + isneg;
	res = (char*)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	res[size] = '\0';
	size--;
	ft_xfer(res, size, n);
	if (isneg)
		res[0] = '-';
	return (res);
}
