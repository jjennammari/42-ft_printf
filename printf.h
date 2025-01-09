/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 23:45:23 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/09 00:16:04 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_prt(unsigned long long ptr);
int	ft_print_d(int nb, int count);
int	ft_print_u(unsigned int nb, int count);
int	ft_print_xX(unsigned int, char *base);

#endif
