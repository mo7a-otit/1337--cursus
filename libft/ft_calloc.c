/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:26:39 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/01 17:05:22 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p)
	{
		ft_bzero(p, (count * size));
		return (p);
	}
	return (0);
}

// int main()
// {
// 	// ft_calloc(5, sizeof(int));
// 	printf("%s", ft_calloc(5, sizeof(int)));
// }
