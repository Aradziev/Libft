/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:51:42 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/29 11:54:35 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_tolower(int g);

int					ft_toupper(int g);

int					ft_isprint(int g);

int					ft_isascii(int g);

int					ft_isalnum(int g);

int					ft_isdigit(int g);

int					ft_isalpha(int g);

int					ft_atoi(const char *str);

int					ft_strncmp(const char *str1, const char *str2, size_t n);

int					ft_strcmp(const char *str1, const char *str2);

char				*ft_strnstr(const char *str1, const char *str2, size_t n);

char				*ft_strstr(const char *str1, const char *str2);

char				*ft_strrchr(const char *str, int c);

char				*ft_strchr(const char *s, int c);

size_t				ft_strlcat(char *restrict dest, const char *restrict src,
		size_t n);

char				*ft_strncat(char *dest, const char *src, size_t n);

char				*ft_strcat(char *dest, const char *src);

char				*ft_strncpy(char *dest, const char *src, size_t n);

char				*ft_strcpy(char *dest, const char *src);

char				*ft_strdup(const char *str);

size_t				ft_strlen(const char *str);

int					ft_memcmp(const void *str1, const void *str2, size_t n);

void				*ft_memchr(const void *str, int g, size_t n);

void				*ft_memmove(void *str, const void *str2, size_t n);

void				*ft_memccpy(void *str, const void *str2, int c, size_t n);

void				*ft_memcpy(void *str, const void *str2, size_t n);

void				ft_bzero(void *str, size_t n);

void				*ft_memset(void *str, int c, size_t n);

void				*ft_memalloc(size_t size);

void				ft_memdel(void **ap);

char				*ft_strnew(size_t n);

void				ft_strdel(char **as);

void				ft_strclr(char *s);

void				ft_striter(char *s, void (*f)(char *));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strsub(char const *s, unsigned int start, size_t n);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s);

char				**ft_strsplit(char const *s, char c);

char				*ft_itoa(int n);

void				ft_putchar(char c);

void				ft_putstr(char const *s);

void				ft_putendl(char const *s);

void				ft_putnbr(int n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void				ft_lstadd(t_list **alst, t_list *new);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
