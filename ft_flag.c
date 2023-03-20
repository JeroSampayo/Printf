/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:25:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/20 17:32:35 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(const char *str, va_list args)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == 's')
		return (ft_putstr(va_arg(args, char*)));
	else if (*str == 'd')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (*str == 'i')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (*str == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), 1));
	else if (*str == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putchar(*str));
}
