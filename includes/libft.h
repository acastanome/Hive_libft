/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:23:54 by acastano          #+#    #+#             */
/*   Updated: 2021/11/15 21:33:26 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//allowed stuff: malloc(3), free(3), write(2) and their usage is restrcted
#include <string.h>//for size_t and NULL

//display stuff
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
//with end lines
void	ft_putendl(char const *s);

//display to other places
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char const *s, int fd);
//void	ft_putnbr_fd(int n, int fd);
//with end lines
//void	ft_putendl_fd(char const *s, int fd);

//return counts
size_t	ft_strlen(const char *s);

//copy stuff
//char	*strdup(const char *s1);//alloc mem, copies, returns pointer to it.if no mem, null and errno set to ENOMEM
//char	*strcpy(char *dst, const char *src);//copy to dest, including '\0'
//char	*strncpy(char *dst, const char *src, size_t len);//copy at most len. if src is less than len long, fill rest of dest with '\0'. otherwise, not terminated

//modify stuff
void	ft_strclr(char *s);
int	ft_atoi(const char *s);
void	*ft_memset(void *b, int c, size_t len);
//void	ft_bzero(void *s, size_t n);

//compare stuff
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//check
int	ft_isalpha(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

#endif
