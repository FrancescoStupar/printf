/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:59:12 by fstupar           #+#    #+#             */
/*   Updated: 2022/01/28 11:59:13 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hex_len(unsigned long long nbr)
{
	int	len;

	len = 0;
	if (nbr == 1)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

/*int main()
{
    int x = 400;
    printf("%d\n", hex_len(x));
}*/