/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:28:43 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/25 11:56:28 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return ;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
// int main()
// {
//     char s[] = "othmane";
//     ft_putstr_fd(s, 1);
// }