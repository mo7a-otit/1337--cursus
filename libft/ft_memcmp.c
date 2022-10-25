/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:02:44 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 11:59:33 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *a1;
    unsigned char *a2;

    a1 = (unsigned char *)s1;
    a2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (a1[i] != a2[i])
            return (a1[i] - a2[i]);
        i++;
    }
    // if (i != n)
    //     return (a1[i] - a2[i]);
    return (0);
}
// int main()
// {
//     char *s1 = "othmane";
//         char *s2 = "oThmane";
//         size_t size = 7;
//         printf(" >> %d\n", memcmp(s1, s2, size));
// }