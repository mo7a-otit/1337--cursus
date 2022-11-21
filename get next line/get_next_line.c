/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:17 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/21 18:09:24 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_line(char *str)
{
    char *m;
    int i;

    i = 0;
    if (!str)
        return (0);
    while (str[i] && str[i] != '\n')
        i++;
    m = malloc(i + 2);
    if (!m)
        return (0);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        m[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
    {
        m[i] = str[i];
        i++;
    }
    m[i] = '\0';
    return (m);
}
