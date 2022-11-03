/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:26:39 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/03 22:36:19 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count * size > SIZE_MAX)
		return (0);
	p = malloc(count * size);
	if (p)
	{
		ft_bzero(p, (count * size));
		return (p);
	}
	return (0);
}
