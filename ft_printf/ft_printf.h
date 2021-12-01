/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:00:55 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/11/30 00:42:17 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <limits.h>

int		ft_printf(const char *format, ...);

void	*ft_func_select(char c);

int		ft_printf_c(char c);

int		ft_printf_s(char *str);

int		ft_printf_p(unsigned long int nbr);

int		ft_printf_d(int nbr);

int		ft_printf_u(unsigned int nbr);

int		ft_printf_x(unsigned int nbr);

int		ft_printf_xx(unsigned int nbr);

#endif