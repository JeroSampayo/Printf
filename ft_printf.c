/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:42:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/20 17:31:51 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int	i;
	int	a;
	va_list	args;

	va_start(args, str);
	i = 0;
	a = 0;
	while (*str && i != -1)
	{
		if (*str == '%' && *(str + 1))
		{
			i = ft_flag(++str, args);
			if (i == -1)
				return (-1);
			a += i;
		}
		else
		{
			if (ft_putchar(*str) == -1)
				return (-1);
			a++;
		}
		str++;
	}
	va_end(args);
	return (a);
}
/*
int main()
{
	int iii = 0;
	int iiii = 0;
	int i1 = 123;
	int i2 = -456;
    unsigned int ui = 0x12345678;
    void *p = (void *)0;
    const char *s = "Hola";

    printf("printf: %c\n", 'H');
    ft_printf("ft_printf: %c\n", 'H');

    printf("printf: %s\n", s);
    ft_printf("ft_printf: %s\n", s);

    printf("printf: %d\n", i1);
    ft_printf("ft_printf: %d\n", i1);

    printf("printf: %d\n", i2);
    ft_printf("ft_printf: %d\n", i2);

    printf("printf: %p\n", p);
    ft_printf("ft_printf: %p\n", p);

    printf("printf: %x\n", ui);
    ft_printf("ft_printf: %x\n", ui);

    printf("printf: %X\n", ui);
    ft_printf("ft_printf: %X\n", ui);

    printf("printf: %d\n", 2147483647);
    ft_printf("ft_printf: %d\n", 2147483647);

    printf("printf: %ld\n", (long int)-2147483648);
	ft_printf("ft_printf: %d\n", -2147483648);

    printf("printf: %p\n", p);
    ft_printf("ft_printf: %p\n", p);

	ft_printf("NULL %s NULL\n", NULL);
	printf("NULL %s NULL\n", NULL);
	
	printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", '0', 0, '1');

	iii = printf(" %p\n %p \n", LONG_MIN, LONG_MAX);
    iiii = ft_printf(" %p\n %p \n", LONG_MIN, LONG_MAX);
	
	printf("FO%d\n", iii);
	printf("FT%d\n", iiii);
	
	return 0;
}*/
