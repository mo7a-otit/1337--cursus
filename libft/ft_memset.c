/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:20:24 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/02 20:46:43 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
// int main()
// {
// 	int s[4] = {1, 5, 6 ,7};
// 	int len =  3;
// 	ft_memset(s, 5, len );
// 	int i= 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", s[i++]);
// 	}
// 	// char s[] = "othmane";
// 	// int len =  7;
// 	// printf("%s", ft_memset(s, 'c', len));
// }