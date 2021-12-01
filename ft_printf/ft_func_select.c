/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:46:23 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/11/30 00:53:06 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_func_select(char c)
{
	if (c == 'c')
		return (ft_printf_c);
	if (c == 's')
		return (ft_printf_s);
	if (c == 'p')
		return (ft_printf_p);
	if (c == 'd')
		return (ft_printf_d);
	if (c == 'i')
		return (ft_printf_d);
	if (c == 'u')
		return (ft_printf_u);
	if (c == 'x')
		return (ft_printf_x);
	if (c == 'X')
		return (ft_printf_xx);
}
