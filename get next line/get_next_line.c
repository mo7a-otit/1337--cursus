/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:17 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/23 00:03:58 by marvin           ###   ########.fr       */
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
    m = (char *)malloc(i + 2);
    if (!m)
        return (NULL);
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

char *get_next(char *save)
{
    char *next;
    int i;
    int j;

    i = 0;
    if (save[i] == 0)
        return (NULL);
    while (save[i] && save[i] != '\n')
        i++;
    next = (char *)malloc(ft_strlen(save) - i + 1);
    if (!next)
        return (NULL);
    if (save[i] == '\n')
        i++;
    j = 0;
    while (save[i])
        next[j++] = save[i++];
    next[j] = '\0';
    return (next);
    
}

char *ft_read(int fd, char *save)
{
    char *buf;
    int bytes;

    if (!buf)
        return (NULL);
    buf = malloc(BUFFER_SIZE + 1);
    bytes = 1;
    while (new_line(save, '\n') == 0 && bytes > 0)
    {
        bytes = read(fd, buf, BUFFER_SIZE);
        if (bytes == -1)
            return (NULL);
        buf[BUFFER_SIZE] = '\0';
        save = ft_strjoin(save, buf);
        if (ft_strchr(buf, '\n'))
            break;
    }
    return (save);
}

char *get_next_line(int fd)
{
    char *line;
    static char *save;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    save = ft_read(fd, save);
    if (!save)
        return (0);
    line = get_line (save);
    save = get_next (line);
    
    return (line);
}

int main()
{
    //char BUFFER_SIZE;
    // char buf[5];
    // char buf2[3];
    int fd;
    fd = open("file.txt", O_RDONLY);
    // read(fd, buf2, BUFFER_SIZE);
    printf("%s", get_next_line(fd));
}