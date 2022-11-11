/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:54:12 by otitebah          #+#    #+#             */
/*   Updated: 2022/11/11 01:00:40 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_hexa(unsigned int n, int base);
int count(unsigned long n);
int ft_adresse(unsigned long n, int base);
int ft_unputnbr(unsigned int n);
int ft_len(long nb);
int ft_printf(const char *str, ...);

#endif
