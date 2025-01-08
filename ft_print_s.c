/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:07:01 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/07 20:49:20 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_s(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_print_c (*str++);
		count++;
	}
	return (count);
}