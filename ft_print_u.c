/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 22:38:36 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/08 23:13:57 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_u(unsigned int nb, char *base)
{
	int	count;

	if (!nb)
		return (ft_print_c('0'));
	count = 0;
	if (nb == 0)
		return (ft_print_d(nb, count));
	while (nb >= 10)
	{
		nb = nb / 10;
		count += ft_print_s (&base[nb % 10]);
	}
	return (count);
}
