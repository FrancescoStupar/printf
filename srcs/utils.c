/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:05:03 by fstupar           #+#    #+#             */
/*   Updated: 2022/01/28 12:33:06 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	printchar(int i)
{
	write (1, &i, 1);
	return (1);
}

int	strlength(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	printp(va_list args)
{
	unsigned long long	num;
	int					len;

	num = va_arg(args, unsigned long long);
	len = hex_len(num);
	ft_putstr_fd("0x", 1);
	put_hexa2(num);
	if (num == 0)
		return (3);
	return (len + 2);
}
