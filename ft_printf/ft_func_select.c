/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:46:23 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/12/01 18:21:08 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* the function selector, recieves a char, and depend of the char
 * returns the write function to the write type of argument.
 * All functions return return an int, the amount of chars it wrote
 */

void	*ft_func_select(char c)
{
	if (c == 'c')
		return (ft_printf_c);
	else if (c == 's')
		return (ft_printf_s);
	else if (c == 'p')
		return (ft_printf_p);
	else if (c == 'd')
		return (ft_printf_d);
	else if (c == 'i')
		return (ft_printf_d);
	else if (c == 'u')
		return (ft_printf_u);
	else if (c == 'x')
		return (ft_printf_x);
	else
		return (ft_printf_xx);
}
