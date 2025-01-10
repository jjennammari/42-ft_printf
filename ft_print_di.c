/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:08:36 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/10 00:24:03 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_di(int nb, int count)
{
	if (nb < 0)
	{
		count += ft_print_c ('-');
		nb = -nb;
	}
	if (nb >= 10)
		count = ft_print_di (nb / 10, count);
	count += ft_print_c(nb % 10 + '0');
	return (count);
}
