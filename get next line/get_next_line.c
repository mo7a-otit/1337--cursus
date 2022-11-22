/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:17 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/22 17:49:38 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read(int fd, char *save)
{
    char *buf;
    int bytes;

    if (!save)
        return (NULL);
    buf = malloc(BUFFER_SIZE + 1);
    bytes = 1;
    while (bytes > 0)
    {
        bytes = read(fd, buf, BUFFER_SIZE);
        buf[BUFFER_SIZE] = '\0';
        save = ft_strjoin(save, buf);
        if (ft_strchr(buf, '\n'))
            break;
    }
    return (buf);
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
    char *str;
    int i;
    int j;

    i = 0;
    if (save[i] == 0)
        return (NULL);
    while (save[i] && save[i] != '\n')
        i++;
    str = malloc(ft_strlen(save) - i + 1);
    if (!str)
        return (NULL);
    if (save[i] == '\n')
        i++;
    j = 0;
    while (save[i])
        str[j++] = save[i++];
    return (str);
    
}

char *get_next_line(int fd)
{
    char *line;
    static char *save;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    save = ft_save (line);
    line = get_line (save);
    
    return (line);
}

int main()
{
    //char BUFFER_SIZE;
    // char buf[5];
    // char buf2[3];
    int fd;
    fd = open("file.txt", O_RDWR | 0777);
    // read(fd, buf2, BUFFER_SIZE);
    printf("%s", get_next_line(fd));
}