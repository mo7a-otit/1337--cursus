/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:29:18 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/21 10:14:47 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;
    int lensrc;
   
    lensrc = ft_strlen(src);
    i = 0;
    if (n > 0)
    {
        while (src[i] && i < n - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (lensrc);
}
// int main ()
// {
//     char dest[20] = "";
//     char src[] = "othmane";
//     printf("%zu\n", strlcpy(dest, src, 4));
//     printf(" >> dest:%s\n", dest);
//     printf(" >> src :%s", src);
// }
