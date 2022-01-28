/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:19 by fstupar           #+#    #+#             */
/*   Updated: 2022/01/28 12:33:14 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	printd(va_list args)
{
	char	*numstr;
	int		i;
	int		num;

	i = 0;
	num = va_arg(args, int);
	numstr = ft_itoa(num);
	while (numstr[i] != '\0')
	{
		write(1, &numstr[i], 1);
		i++;
	}
	free(numstr);
	return (i);
}

int	printu(va_list args)
{
	char			*numstr;
	int				i;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	i = 0;
	numstr = ft_utoa(num);
	while (numstr[i] != '\0')
	{
		write(1, &numstr[i], 1);
		i++;
	}
	free(numstr);
	return (i);
}

int	prints(va_list args)
{
	char	*numstr;

	numstr = va_arg(args, char *);
	if (numstr == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(numstr, 1);
	return (strlength(numstr));
}

int	printx(va_list args)
{
	unsigned int	num;
	int				len;

	len = 0;
	num = va_arg(args, unsigned int);
	put_hexa2(num);
	if (num == 0)
		return (1);
	len = hex_len(num);
	return (len);
}

int	printxx(va_list args)
{
	unsigned int	num;
	int				len;

	len = 0;
	num = va_arg(args, unsigned int);
	put_hexa(num);
	if (num == 0)
		return (1);
	len = hex_len(num);
	return (len);
}
