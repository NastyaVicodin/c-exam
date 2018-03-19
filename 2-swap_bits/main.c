/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:55:26 by alukyane          #+#    #+#             */
/*   Updated: 2017/10/23 18:55:45 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <unistd.h>

void	ft_putchar(char c);
unsigned char	swap_bits(unsigned char octet);
void	print_bits(unsigned char octet);

int		main(void)
{
	print_bits(67);
	ft_putchar('\n');
	print_bits(swap_bits(67));
	return (0);
}