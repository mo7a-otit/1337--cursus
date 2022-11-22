/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:17 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/22 02:35:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read(int fd, char *buf)
{
    char *res;
    int bytes;

    if (!buf)
        return (NULL);
    bytes = 1;
    while (bytes > 0)
    {
        bytes = read(fd, buf, BUFFER_SIZE);
        buf[BUFFER_SIZE] = '\0';
        if (ft_strchr(buf, '\n'))
            break;
    }
    return (res);
}

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
char *ft_save(char *save)
{
    
}

char *get_next_line(int fd)
{
    char *line;
    static char *save;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    line = get_line(save);
    save = 
}