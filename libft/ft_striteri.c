/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:03:12 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/25 10:58:24 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s)
        return ;
    while (i < ft_strlen(s))
    {
        (*f)(i, &s[i]);
        i++;
    }
}

// void myfunc(unsigned int i, char *str)
// {
//     (void) i;
//     if (*str >= 'A' && *str <= 'Z')
//         *str += 32;   
// }
// int main ()
// {
//     char p[] = "LLL";
//     ft_striteri(p, myfunc);
//     printf("%s", p);
// }