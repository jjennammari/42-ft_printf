/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:33:06 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/08 23:54:48 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	ft_printf("Print char: %c, %c, %c\n", 'A', 55, 'f');
	printf("Print char: %c, %c, %c\n", 'A', 55, 'f');
	write (1, "\n", 1);
	ft_printf("Print str: %s, %s\n", "Next str is empty:", "");
	printf("Print str: %s, %s\n", "Next str is empty:", "");
	write (1, "\n", 1);
	ft_printf("Print void*: %p, %p, %p\n", "abc", "", "31");
	printf("Print void*: %p, %p, %p\n", "abc", "", "31");
	write (1, "\n", 1);
	ft_printf("Print decimal: %d, %d, %d, %d\n", -2147483647, 0, 2147483647, 3);
	printf("Print decimal: %d, %d, %d, %d\n", -2147483647, 0, 2147483647, 3);
	write (1, "\n", 1);
	ft_printf("Print digit: %i, %i, %i, %i\n", -214748364, 0, 2147483647, 3);
	printf("Print digit: %i, %i, %i, %i\n", -214748364, 0, 2147483647, 3);
	write (1, "\n", 1);
	ft_printf("Print unsigned int: %u, %u, %u, %u, %u\n", -32, 0, 145, 2147483647, 3);
	printf("Print unsigned int: %u, %u, %u, %u, %u\n", -32, 0, 145, 2147483647, 3);
	write (1, "\n", 1);
	ft_printf("Print hex lower: %x, %x, %x, %x\n", -534, 0, 100, 254467);
	printf("Print hex lower: %x, %x, %x, %x\n", -534, 0, 100, 254467);
	write (1, "\n", 1);
	ft_printf("Print hex upper: %X, %X, %X, %X\n", -534, 0, 100, 254467);
	printf("Print hex upper: %X, %X, %X, %X\n", -534, 0, 100, 254467);
	write (1, "\n", 1);
	ft_printf("%%\n");
	printf("%%\n");
	return (0);
}
