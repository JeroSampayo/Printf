/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:30:09 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 11:46:19 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_flag(const char *str, va_list args, int i);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c, int i);
int	ft_puthex(unsigned int n, const char *base, int i);
int	ft_putnbr(int n, int i);
int	ft_putptr(void *ptr, int i);
int	ft_putstr(const char *s, int i);

#endif
