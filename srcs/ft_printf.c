/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:08:07 by fstupar           #+#    #+#             */
/*   Updated: 2022/01/28 12:44:35 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	checkarg(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += printchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		counter += printd(args);
	else if (c == 'u')
		counter += printu(args);
	else if (c == 's')
		counter += prints(args);
	else if (c == 'x')
		counter += printx(args);
	else if (c == 'X')
		counter += printxx(args);
	else if (c == 'p')
		counter += printp(args);
	else
		counter += printchar('%');
	return (counter);
}

int	ft_printf(const char *string, ...)
{
	int		counter;
	int		i;
	va_list	args;

	counter = 0;
	i = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] != '%')
			counter += printchar(string[i]);
		else
			counter += checkarg(string[++i], args);
		i++;
	}
	va_end(args);
	return (counter);
}
