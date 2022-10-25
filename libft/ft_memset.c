/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:20:24 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 12:51:13 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    // unsigned char s;
    // s = (unsigned char *)c;

    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned char )c;
        i++;
    }
    return (b);
}
// int main()
// {
//     //unsigned char b[] = "othmane";
//     int arr[7] = {1, 1, 1, 1, 1, 1, 1};
//     int c = 4;
//     size_t i = 0;
//     size_t len = 4;
//     ft_memset(arr, c, len * sizeof(int));
//     while (i < 7)
//     {
//         printf("%d, ", arr[i]);
//         i++;
//     }
    
// }