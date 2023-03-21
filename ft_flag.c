/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:25:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:28:31 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_flag(const char *str, va_list args, int i)
{
	if (*str == 'c')
		i =  ft_putchar(va_arg(args, int), i);
	else if	(*str == 's')
		i = ft_putstr(va_arg(args, char*), i);
	else if	(*str == 'd')
		i = ft_putnbr(va_arg(args, int), i);
	else if	(*str == 'i')
		i = ft_putnbr(va_arg(args, int), i);
	else if	(*str == 'p')
		i = ft_putptr(va_arg(args, void*), i);
	else if (*str == 'x')
		i = ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if (*str == 'X')
      		i =  ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", i);
	return (i);
}
