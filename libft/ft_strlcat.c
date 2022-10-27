/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:55 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/27 15:47:39 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	lendest = 0;
	if (size == 0)
		return ()
	if (!dest)
		return (0);
	while (dest[lendest] && lendest < size)
		lendest++;
	lensrc = 0;
	while (src[lensrc] && lensrc < size)
	{
		dest[lendest + lensrc] = src[lensrc];
		lensrc++;
	}
	dest[lendest + lensrc] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (ft_strlen(dest));
}

int main ()
{
	const char src[] = "\0";
	char dest[] = "oth";
	size_t i = 3;
	printf(">>  : %lu\n", strlcat(dest, src, i));
	printf("--> src : %s\n", src);
	printf("-->dest : %s\n", dest);
 } 
