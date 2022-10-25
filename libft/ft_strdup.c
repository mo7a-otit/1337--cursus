/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:04:56 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 13:05:43 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *m;
    
    i = 0;
    m = malloc(sizeof(char) * (ft_strlen (s) + 1));
    if (m == NULL)
        return (0);
    while (s[i])
    {
        m[i] = s[i];
        i++;
    }
    m[i] = '\0';
    return (m);
}
// int main()
// {
//     const char s[20] = "";
//     char *b;
//     b = ft_strdup(s);
//     printf(">> %s\n", s);
//     printf(">> %s\n", b);
// }