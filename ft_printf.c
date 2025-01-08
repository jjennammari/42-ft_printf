/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:58:27 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/08 23:31:15 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_c(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_s(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_print_prt(va_arg(ap, unsigned long long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_d(va_arg(ap, int), 0);
	else if (specifier == 'u')
		count += ft_print_u(va_arg(ap, unsigned int),
				"0123456789");
	else if (specifier == 'x')
		count += ft_print_xX(va_arg(ap, unsigned int),
				"0123456789abcdef");
	else if (specifier == 'X')
		count += ft_print_xX(va_arg(ap, unsigned int),
				"0123456789ABCDEF");
	else if (specifier == '%')
	{
		write (1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

	va_start (ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_print_format(*(++format), ap);
		else
			count += write (1, format, 1);
		format++;
	}
	va_end (ap);
	return (count);
}
