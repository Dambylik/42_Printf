/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:19:23 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 17:31:22 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int	ft_print_string(char tag, va_list p_to_arg);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_digit_min(long n, int base);
int	ft_print_digit_maj(long n, int base);
int	ft_printf(const char *string, ...);
int	ft_print_pointer(void *ptr_val);
int	ft_print_pos_digit(unsigned long n, int base);

#endif
