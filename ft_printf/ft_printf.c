/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:36:07 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/12/01 18:19:17 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* In printf, I'm running the string that we recieve it,
 * and wirte it char by char, when it found an % it will
 * check if the position right after its one of the chars
 * that I want to print the right type of the arg.
 * If I encounter an char in strchr, it will run the 
 * function selector to choose the write function to the
 * char it found, and it will print whats in the va_arg.
 * (int(*)()) is to cast as an int the function selector
 * that is a pointer to a function, because counter is an
 * int. The va_arg receives a void * to be able to recieve
 * every type of variable.
 * The ft_func_select is an abstract funciont, thats also
 * why my va_arg recieves an void *.
 * */


int	ft_printf(const char *format, ...)
{
	va_list	n_arg;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	va_start(n_arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX", format[++i]))
			{
				counter += ((int (*)())ft_func_select
						(format[i++]))(va_arg(n_arg, void *));
				continue ;
			}
		}
		write(1, &format[i], 1);
		i++;
		counter++;
	}
	va_end(n_arg);
	return (counter);
}
