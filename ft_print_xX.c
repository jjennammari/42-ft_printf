/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 01:30:07 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/09 20:03:46 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_xX(unsigned int nb, char *base, int count)
{
	if (nb >= 16)
		count += ft_print_xX ((nb / 16), base, count);
	count += ft_print_c (base[nb % 16]);
	return (count);
}
