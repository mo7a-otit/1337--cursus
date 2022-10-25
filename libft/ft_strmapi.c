/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:46:34 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/25 10:55:52 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *m;
    int len;
    int i;
    
    if (!s)
        return (NULL);
    len = ft_strlen(s);
    i = 0;
    m = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!m)
        return (NULL);
    while (s[i])
    {
        m[i] = (*f)(i , s[i]);
        i++;
    }
    m[i] = '\0';
    return(m);
}
// char myfunc(unsigned int a, char b)
// {
//     (void)a;
//     if (b >= 'a' && b <= 'z')
//         {
//             b -= 32;
//             return (b);
//         }
//     else 
//          return (b);
// }
// int main()
// {
//     char str[] = "OThmane";
//     char *result = ft_strmapi(str, myfunc);
//     printf("%s", result);
// }