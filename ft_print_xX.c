/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 01:30:07 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/08 20:51:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_xX(unsigned int nb, char *base)
{
	unsigned int	nbr;
	int	count;

	if (!nb)
		return ft_print_s("0");
	while (nb >= 16)
		nbr = nb++ / 16;
	count = 0;
	count += ft_print_s(&base[nbr % 10]);
	return (count);
}
