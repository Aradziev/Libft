/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:12:48 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/28 16:18:28 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;
	void	*rcontent;
	size_t	rsize;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		rcontent = ft_memalloc(content_size);
		if (rcontent == NULL)
			return (NULL);
		rsize = content_size;
		ft_memcpy(rcontent, content, content_size);
		newlist->content = rcontent;
		newlist->content_size = rsize;
	}
	newlist->next = NULL;
	return (newlist);
}
