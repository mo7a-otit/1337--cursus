/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:53:52 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 13:05:16 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}
// int main ()
// {
    
// int i = 0;
// int oth[6] = {1, 1, 1, 1, 1, 1};
// bzero(oth, 3 * sizeof(int));
// while (i < 6)
// {
//     printf("%d, ", oth[i]);
//     i++;
// }
// }
    /*ft_bzero(oth, 3);*/