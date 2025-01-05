/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:52:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/05 22:41:26 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_unsigned(unsigned int i)
{
	int	count;

	count = 0;
	if (i < 0)
		count += ft_print_str ("4294967295");
	else
		count += ft_print_str (char *(i);

	return (count);
}
