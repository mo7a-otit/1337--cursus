/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:26:39 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/25 14:32:40 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t count, size_t size)
{
    void *p;
    
    p = malloc(count * size);
    if (p) // means p != null
    {
        ft_bzero(p, (count * size));
        return (p);
    }
    return (0);
}
// int main()
// {
    
// char *arr;
// size_t i;
// size_t count;


// count = 0;
// arr = ft_calloc(count, sizeof(int));
// i = 0;
// while (i < count)
// {
//     printf("%d, ", arr[i]);
//     i++;
// }
// }