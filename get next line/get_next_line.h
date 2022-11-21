/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:56:34 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/21 23:33:25 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#   define BUFFER_SIZE 10
#   endif

# include <unistd.h>
# include <stdlib.h>
#include <fcntl.h>

char    *ft_strchr(const char *s, int c);
char ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
#endif