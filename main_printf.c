/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:33:06 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/12 14:43:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	*ptr = NULL;

	ft_printf("Print char: %c, %c, %c, %c\n", 'A', 33, 'f', '\0');
	printf("Print char: %c, %c, %c, %c\n", 'A', 33, 'f', '\0');
	write (1, "\n", 1);
	ft_printf("Print str: %s, %s, %s\n", "Next str is empty:", "", ptr);
	printf("Print str: %s, %s, %s\n", "Next str is empty:", "", ptr);
	write (1, "\n", 1);
	ft_printf("Print void*: %p, %p, %p, %p\n", "abc", "", "31", NULL);
	printf("Print void*: %p, %p, %p, %p\n", "abc", "", "31", NULL);
	write (1, "\n", 1);
	ft_printf("Print decimal: %d, %d, %d, %d, %d\n", -2147483648, 0, 2147483647, 3, '\0');
	printf("Print decimal: %ld, %d, %d, %d, %d\n", -2147483648, 0, 2147483647, 3, '\0');
	write (1, "\n", 1);
	ft_printf("Print digit: %i, %i, %i, %i, %i\n", -2147483648, 0, 2147483647, 3, '\0');
	printf("Print digit: %li, %i, %i, %i, %i\n", -2147483648, 0, 2147483647, 3, '\0');
	write (1, "\n", 1);
	ft_printf("Print unsigned int: %u, %u, %u, %u, %u\n", -32, 0, 145, 2147483647, '\0');
	printf("Print unsigned int: %u, %u, %u, %u, %u\n", -32, 0, 145, 2147483647, '\0');
	write (1, "\n", 1);
	ft_printf("Print hex lower: %x, %x, %x, %x, %x\n", -534, 0, 100, 254467, '\0');
	printf("Print hex lower: %x, %x, %x, %x, %x\n", -534, 0, 100, 254467, '\0');
	write (1, "\n", 1);
	ft_printf("Print hex upper: %X, %X, %X, %X, %X\n", -534, 0, 100, 254467, '\0');
	printf("Print hex upper: %X, %X, %X, %X, %X\n", -534, 0, 100, 254467, '\0');
	write (1, "\n", 1);
	ft_printf("%%\n");
	printf("%%\n");
	write (1, "\n", 1);
	write (1, "\n", 1);
	ft_printf("Print multiple types: %c, %s, %p, %i, %u, %x\n", 'h', "woop", "enjoy", -789, 7894, 20);
	printf("Print multiple types: %c, %s, %p, %i, %u, %x\n", 'h', "woop", "enjoy", -789, 7894, 20);
	write (1, "\n", 1);
	write (1, "\n", 1);
	ft_printf("\nCounter char: %d, %d, %d, %d\n", ft_printf("%c, ", "A"), ft_printf("%c, ", 33), ft_printf("%c, ", 255), ft_printf("%c", '\0'));
	printf("\nCounter char: %d, %d, %d, %d\n", ft_printf("%c, ", "A"), ft_printf("%c, ", 33), ft_printf("%c. ", 255), ft_printf("%c", '\0'));
	write (1, "\n", 1);
	ft_printf("Counter str: %d, %d, %d\n", ft_printf("%s, ", "enjoy"), ft_printf("%s, ", ""), ft_printf("%s\n", ptr));
	printf("Counter str: %d, %d, %d\n", ft_printf("%s, ", "enjoy"), ft_printf("%s, ", ""), ft_printf("%s\n", ptr));
	write (1, "\n", 1);
	ft_printf("Counter ptr: %d, %d, %d, %d\n", ft_printf("%p, ", "abc"), ft_printf("%p, ", ""), ft_printf("%p, ", 31), ft_printf("%p\n", NULL));
	printf("Counter ptr: %d, %d, %d, %d\n", ft_printf("%p, ", "abc"), ft_printf("%p, ", ""), ft_printf("%p, ", 31), ft_printf("%p\n", NULL));
	write (1, "\n", 1);
	ft_printf("Counter decimal: %d, %d, %d, %d\n", ft_printf("%d, ", -2147483647), ft_printf("%d, ", 0), ft_printf("%d, ", 2147483647), ft_printf("%d\n", 33));
	printf("Counter decimal: %d, %d, %d, %d\n", ft_printf("%d, ", -2147483647), ft_printf("%d, ", 0), ft_printf("%d, ", 2147483647), ft_printf("%d\n", 33));
	write (1, "\n", 1);
	ft_printf("Counter digit: %d, %d, %d, %d\n", ft_printf("%i, ", -2147483647), ft_printf("%i, ", 0), ft_printf("%i, ", 2147483647), ft_printf("%i\n", '\0'));
	printf("Counter digit: %d, %d, %d, %d\n", ft_printf("%i, ", -2147483647), ft_printf("%i, ", 100), ft_printf("%i, ", 2147483647), ft_printf("%i\n", '\0'));
	write (1, "\n", 1);
	ft_printf("Counter unsig: %d, %d, %d, %d, %d\n", ft_printf("%u, ", -3424), ft_printf("%u, ", 0), ft_printf("%u, ", 145), ft_printf("%u, ", 2147483647), ft_printf("%u\n", '\0'));
	printf("Counter unsig: %d, %d, %d, %d, %d\n", ft_printf("%u, ", -3424), ft_printf("%u, ", 0), ft_printf("%u, ", 145), ft_printf("%u, ", 2147483647), ft_printf("%u\n", '\0'));
	write (1, "\n", 1);
	ft_printf(("\nCounter hex: %d, %d, %d\n"), ft_printf("%x, ", -3246574), ft_printf("%x, ", 0), ft_printf("%x", 334354321));
	printf(("\nCounter hex: %d, %d, %d\n"), ft_printf("%x, ", -3246574), ft_printf("%x, ", 0), ft_printf("%x", 334354321));
	write (1, "\n", 1);
	ft_printf("Counter HEX: %d, %d, %d, %d, %d\n", ft_printf("%X, ", -532), ft_printf("%X, ", 0), ft_printf("%X, ", 100), ft_printf("%X, ", 2544675), ft_printf("%X\n", '\0'));
	printf("Counter HEX: %d, %d, %d, %d, %d\n", ft_printf("%X, ", -532), ft_printf("%X, ", 0), ft_printf("%X, ", 100), ft_printf("%X, ", 2544675), ft_printf("%X\n", '\0'));
	return (0);
}
