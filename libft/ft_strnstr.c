/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:38:29 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 07:28:18 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{ 
    //s1 string li anqalbo fih ,, s2 string li anqalbo elih
    char *c1;
    char *to_find;
    size_t i;
    size_t j;

    c1 = (char *)s1;
    to_find = (char *)s2;
    if (to_find[0] == 0)
        return (c1);
    i = 0;
    while (i < len)
    {
        j = 0;
        while (c1[i + j] && c1[i + j] == to_find[j] && (i + j) < len)
        {
            j++;
            if (to_find[j] == '\0')
                return (&c1[i]);
        }
        i++;
    }
    return (0);
    
}
// int main()
// {
//     // char *s1 = "othmane";
//     //     char *s2 = "ma";
//         // size_t max = strlen(s2);
//         char *s1 = "MZIRIBMZIRIBMZE123";
//         char *s2 = "MZIRIBMZE";
//         size_t max = 15;
//         printf("%s", ft_strnstr(s1, s2, max));
// }