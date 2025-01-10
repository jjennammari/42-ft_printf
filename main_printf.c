/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:33:06 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/10 00:22:22 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
	ft_printf("Print decimal: %d, %d, %d, %d, %d\n", -2147483647, 0, 2147483647, 3, '\0');
	printf("Print decimal: %d, %d, %d, %d, %d\n", -2147483647, 0, 2147483647, 3, '\0');
	write (1, "\n", 1);
	ft_printf("Print digit: %i, %i, %i, %i, %i\n", -214748364, 0, 2147483647, 3, '\0');
	printf("Print digit: %i, %i, %i, %i, %i\n", -214748364, 0, 2147483647, 3, '\0');
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
	ft_printf("Print multiple types: %c, %s, %p, %i, %u, %x\n", 'h', "woop", "enjoy", -789, 7894, 20);
	printf("Print multiple types: %c, %s, %p, %i, %u, %x\n", 'h', "woop", "enjoy", -789, 7894, 20);
	write (1, "\n", 1);
	printf(("\nCounter: %d\n"), ft_printf("%x", '\0'));
	printf(("\nCounter: %d\n"), printf("%x", '\0'));
	return (0);
}
