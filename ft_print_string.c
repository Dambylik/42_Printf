/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:07:03 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 17:44:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char tag, va_list p_to_arg)
{
	int	count;

	count = 0;
	if (tag == 'c')
		count += ft_print_char(va_arg(p_to_arg, int));
	else if (tag == 's')
		count += ft_print_str(va_arg(p_to_arg, char *));
	else if (tag == 'p')
		count += ft_print_pointer(va_arg(p_to_arg, void *));
	else if (tag == 'd' || tag == 'i')
		count += ft_print_digit_min((long)(va_arg(p_to_arg, int)), 10);
	else if (tag == 'u')
		count += ft_print_pos_digit((unsigned long)(va_arg(p_to_arg,
						unsigned int)), 10);
	else if (tag == 'x')
		count += ft_print_digit_min((unsigned long)(va_arg(p_to_arg,
						unsigned int)), 16);
	else if (tag == 'X')
		count += ft_print_digit_maj((unsigned long)(va_arg(p_to_arg,
						unsigned int)), 16);
	else
		count += write (1, &tag, 1);
	return (count);
}
