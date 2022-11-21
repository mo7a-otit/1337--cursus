/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:56:44 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/21 18:04:05 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] && str[i] == '\n')
        i++;
    if (str[i] == '\n')
        i++;
    return (i);    
}

char ft_strjoin(char *s1, char *s2)
{
    char *m;
    int i;
    int j;

    if (s1 || !s2)
        return (NULL);
    if (!s1 || s2)
        return (NULL);
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