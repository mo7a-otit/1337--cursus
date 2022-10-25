/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:00:12 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/22 13:06:21 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *m;
    unsigned int i;

    if (!s)
        return (NULL);
    if (len > (ft_strlen(s) - start))
        len = ft_strlen(s) - start;
    i = 0;
    m = malloc(sizeof(char) * (len + 1));
    if (!m)
        return (NULL);
    while (i < len && s[i + start] && start < ft_strlen(s))
    {
        m[i] = s[i + start];
        i++;
    }
    m[i] = '\0';
    return (m);
}

// int main()
// {
//     char s[] = "";
//      unsigned int start = 5;
//      size_t len = 10;

//     // char *s = "i just want this part #############";
//     //     size_t size = 10;
//     printf("%s\n", ft_substr(s, start, len));
// }