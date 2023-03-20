/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:25:04 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/20 17:40:24 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_stou(int n)
{
	unsigned int	unu;

	unu = n;
	unu += UINT_MAX + 1;
	return (unu);
}

int	ft_putnbr(long n, int flag)
{
	int	i;

	i = 0;
	if (flag == 1)
		n = ft_stou(n);
	if (n == -2147483648)
		i += ft_putstr("-2147483648");
	else if (n < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(-n, 0);
	}
	else if (n >= 10)
	{
		i += ft_putnbr(n / 10, 0) ;
		i += ft_putchar(n % 10 + '0');
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}
