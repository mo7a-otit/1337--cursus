/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:54:13 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 02:40:52 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_p(unsigned long n)
{
	if (n > 15)
	{
		ft_hexa_p(n / 16);
		ft_hexa_p(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (count(n));
}

int	ft_adresse(unsigned long n, int base)
{
	if (base == 'p')
	{
		ft_putstr("0x");
		ft_hexa_p(n);
	}
	else
		return (0);
	return (count (n) + 2);
}
