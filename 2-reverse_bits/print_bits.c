/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:07:57 by alukyane          #+#    #+#             */
/*   Updated: 2017/10/23 18:08:05 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int	oct;
	int	div;

	oct = octet;
	div = 128;
	while (div != 0)
	{
		if (oct / div > 0)
		{
			ft_putchar('1');
			oct = oct % div;
		}
		else
			ft_putchar('0');
		div /= 2;
	}
}
