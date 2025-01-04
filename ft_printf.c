/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:58:27 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/04 19:21:19 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == c)
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == s)
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == p)
		count += ft_print_pointer(va_arg(ap, void *));
	else if (specifier == d || specifier == i)
		count += ft_print_digit(ap);
	else if (specifier == u)
		count += ft_print_decimal(va_arg(ap, unsigned int));
	else if (specifier == x)
		count += ft_print_hex_lowcase(ap);
	else if (specifier == X)
		count += ft_print_hex_uppercase(ap);
	else (specifier == %)
	{
		write (1, '%', 1);
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
		if (*format == %)
			count += ft_print_format(*(++format), ap);
		else
			count += write (1, &format, 1);
		format++;
	}
	va_end (ap);
	return (count);
}

int	main(void)
{
	ft_printf("%s %d %s\n", 3, '"Siru on kohta", 32, "vuotias");
	printf("%s %d %s\n", 3, "Siru on kohta", 32, "vuotias");
	return (0);
}
