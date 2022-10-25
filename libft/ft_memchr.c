/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:09:53 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 11:56:24 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *b;

    b = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (b[i] == (unsigned char)c)
        {
            return (b + i);
        }
        i++;
    }
    return NULL;
 }
// int main()
// {
//     char s[] = "ohmanetitebah";
//     int c = 'h';
//     printf(">>%s\n", memchr(s, c, 7));

//     // char s[] = "ohmanetitebah";
//     // int c = 't';
//     printf(">>%s\n", ft_memchr(s, c, 7));
// }