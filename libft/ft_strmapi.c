/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:46:34 by otitebah          #+#    #+#             */
/*   Updated: 2022/10/27 13:47:05 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*m;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	m = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	while (s[i])
	{
		m[i] = (*f)(i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}
