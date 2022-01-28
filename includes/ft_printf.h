/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:09:52 by fstupar           #+#    #+#             */
/*   Updated: 2022/01/28 12:10:07 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int	ft_printf(const char *string, ...);
int	checkarg(char c, va_list args);
int	strlength(const char *s);
int	printchar(int i);
int	printd(va_list args);
int	prints(va_list args);
int	printu(va_list args);
int	printx(va_list args);
int	printxx(va_list args);
int	printp(va_list args);
int	put_hexa_long(unsigned long long nbr);

#endif