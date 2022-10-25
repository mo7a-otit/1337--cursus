/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:50:41 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/19 21:00:21 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    unsigned char *s11;
    unsigned char *s22;

    s11 = (unsigned char *)s1;
    s22 = (unsigned char *)s2;
    i = 0;
    while ((s11[i] || s22[i]) && (i < n))
    {
        if (s11[i] != s22[i])
            return (s11[i] - s22[i]);
        i++;
    }
   
    return (0);
}
// int main()
// {
//     char s1[] = "\200";
//     char s2[] = "\0";
//     size_t i = 1;
//     printf("%d", strncmp(s1, s2, i));
// }