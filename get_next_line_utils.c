/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:56:44 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/22 23:40:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i])
        i++;
    return (i);    
}

int new_line(char *s, int c)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    if (c == '\0')
        return (0);
    while (s[i])
    {
        if (s[i] == (char)c)
            return (1);
        i++;
    } 
    return (0);
}

char    *ft_strchr(const char *s, int c)
{
    int             i;
    char    *a;
    char    o;
    int             b;

    o = (char )c;
    a = (char *)s;
    b = ft_strlen(a);
    i = 0;
    if (o == '\0')
        return (&a[b]);
    while (a[i])
    {
        if (a[i] == o)
        {
                return (a + i);
        }
        i++;
    }
    return (0);
}

char *ft_strjoin(char *s1, char *s2)
{
    char *m;
    int i;
    int j;

    i = 0;
    if (!s1 || !s2)
        return (NULL);
    m = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!m)
        return (NULL);
    while (s1[i])
    {
        m[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        m[i + j] = s2[j];
        j++;
    }
    m[i + j] = '\0';
    return (m);
}