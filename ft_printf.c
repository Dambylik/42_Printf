/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:29:57 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 17:42:46 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list	p_to_arg;
	int		count;

	count = 0;
	va_start (p_to_arg, string);
	while (*string)
	{
		if (*string == '%' && *(string + 1) != '\0')
		{
			if (*(string + 1) == '%')
				count += write(1, "%", 1);
			else
				count += ft_print_string(*(string + 1), p_to_arg);
			string++;
		}
		else
			count += write(1, string, 1);
		string++;
	}
	va_end(p_to_arg);
	return (count);
}

/* int	main(void)
{
	int	count_my_function;
	int 	count_real_function;
	int a = 11;
	
	ft_printf("Print string : Hello %s\n", "");
	printf("Print string : Hello %s\n", "");
	
	count_my_function = ft_printf("This string : Hello %s\n", "Olga");
	count_real_function = printf("This string : Hello %s\n", "Olga");

	ft_printf("Print int %d chars\n", count_my_function);
	printf("Print int %d chars\n", count_real_function);

	ft_printf("Print char : Hello %c\n", '#');
	printf("Print char : Hello %c\n", '#');

	ft_printf("Print %% sign\n");
	printf("Print %% sign\n");

	ft_printf("Print hex_min %x\n", a);
	printf("Print hex_min %x\n", a);

	ft_printf("Print hex_MAJ %X\n", a);
	printf("Print hex_MAJ %X\n", a);

	ft_printf("%p$\n", &a);
	
	ft_printf("%p %p$\n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("%p %p$\n", (void *)LONG_MIN, (void *)LONG_MAX);

	ft_printf("%p %p$\n", (void *)ULONG_MAX, (void *)(-ULONG_MAX));
	printf("%p %p$\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);

	ft_printf("%p %p$\n", NULL, NULL);
	printf("%p %p$\n", NULL, NULL);

	return (0);
}  */
