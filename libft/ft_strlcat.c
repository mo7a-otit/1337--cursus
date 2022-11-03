/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:55 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/31 11:55:04 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t d;
	size_t s;
	size_t result;

	if (size == 0 && dest == 0)
		return (ft_strlen(src));
	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		result = d + s;
	else 
		result = s + size;
	while (src[i] && (d + 1) < size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (result);
}


// int main ()
// {
// 	printf("%zu", ft_strlcat("pqrstuvwxyz", "abcd", 20));
// 	printf("%zu", strlat("zxcvbnmlkjh", "abcd", 20));
// 	const char *src = "oth";
// 	char *dest = 0;
// 	size_t i = 0;
// 	printf(">>  : %lu\n", ft_strlcat(dest, src, i));
// 	printf("--> src : %s\n", src);
// 	printf("-->dest : %s\n", dest);
//  } 
