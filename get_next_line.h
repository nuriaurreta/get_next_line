/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nurreta <nurreta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:53:54 by nuria             #+#    #+#             */
/*   Updated: 2023/11/20 14:28:00 by nurreta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char		*get_next_line(int fd);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strdup(char *s1);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ifminus(char *chars);

#endif