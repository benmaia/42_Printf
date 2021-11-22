/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:10:45 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/11/22 12:34:44 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{

	va_list ap;
	int i;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] = '%')
		{
			if (va_arg(format, 'c'))
				return (ft_putchar_fd(ap, 1));

			if (va_arg(format, 'd'))
				return (ft_putnbr_fd(ap, 1));

			if (va_arg(format, 's'))
				return (ft_putstr_fd(ap, 1));

			if (va_arg(format, 'p'))
				return (ft_void * hexa);

			if (va_arg(format, 'i'))
				return (ft_putnbr_fd(ap, 1));

			if (va_arg(format, 'u'))
				return (ft_putnbr_fd(ap, 1));

			if (va_arg(format, 'x'))
                return (ft_putnbr_base(ap, 1));

            if (va_arg(format, 'X'))
                return (ft_putnbr_base(ap, 1));

            if (va_arg(format, '%'))
                return (ft_putchar_fd("%", 1));
		}
		else
			ft_putchar_fd(format, 1);
		i++;
	}
}
