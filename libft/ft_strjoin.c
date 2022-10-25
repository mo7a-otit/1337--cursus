/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:37:21 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/21 16:49:19 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *m;
    int i;
    int j;
    int len1;
    int len2;
    
    if (!s1 || !s2)
        return (NULL);
    i = 0;
    len1 = strlen(s1) ;
    len2 = strlen(s2);
    m = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!m)
        return (NULL);
    while (s1[i])
    {
        m[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
            m[i + j] = s2[j];
            j++;
    }
    m[i + j] = '\0';
    return (m);
}

// int main()
// {
//     char s1[] = "othmane";
//     char s2[] = "tit";
//     printf("%s", ft_strjoin(s1, s2));
// }