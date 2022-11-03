/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:19:09 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/02 22:47:00 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long a;

	a = (long)n;
	// if (a == -2147483648)
	// 	ft_putstr_fd("-2147483648", fd);
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = a * -1;
	}
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar_fd(a % 10 + '0', fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}
