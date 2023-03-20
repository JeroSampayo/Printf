/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:30:09 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/20 18:09:52 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_flag(const char *str, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned long n, const char *base);
int	ft_putnbr(long n, int flag);
int	ft_putptr(unsigned long ptr);
int	ft_putstr(const char *s);

#endif
