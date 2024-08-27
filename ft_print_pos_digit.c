/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pos_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:13:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 17:45:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pos_digit(unsigned long n, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < (unsigned long)base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
		count = count + ft_print_pos_digit(n / base, base);
	return (count + ft_print_pos_digit(n % base, base));
}
