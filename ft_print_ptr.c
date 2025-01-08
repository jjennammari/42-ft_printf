/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:54:37 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/08 01:10:41 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int     ft_prt(unsigned long long ptr);

int	ft_print_prt(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write (1, "0x", 2);
	count += ft_prt (ptr);
	return (count);
}

int	ft_prt(unsigned long long ptr)
{
	char	*hex;
	int	count;

	hex = "0123456789abcdef";
	if (!ptr)
		ft_print_s ("0");
	count = 0;
	if (ptr >= 16)
		count += ft_prt (ptr / 16);
	count += ft_print_c(hex[ptr % 16]);
	return (count);
}
