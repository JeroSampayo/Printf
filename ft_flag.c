/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:25:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/21 19:03:41 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

int	ft_flag(const char *str, va_list args)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == 's')
		return (ft_putstr(va_arg(args, const char *)));
	else if (*str == 'd')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (*str == 'i')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (*str == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), 1));
	else if (*str == 'x')
		return (ft_puthex(va_arg(args, unsigned int), BASEHEXL));
	else if (*str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), BASEHEXU));
	else if (*str == '%')
		return (ft_putchar('%'));
	return (ft_putchar(*str));
}
