/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:20:59 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 13:05:34 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    if (dest  == NULL && src == NULL)
        return (NULL);
    else if (dest > src)
    {
       while (len--)
        d[len] = s[len];
    }
    else
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

// int main ()
// {
// //     char src[] = "";
// //     char dest[] = "";
// //     printf("%s" , ft_memmove(dest , src, 5));

//    char src1[] = "yassin";
//     char dest[] = "gfhfhh";
//     printf(">>%s\n" , memmove(dest, src1, 4));
// }