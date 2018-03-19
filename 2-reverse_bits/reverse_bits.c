/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:55:51 by alukyane          #+#    #+#             */
/*   Updated: 2017/10/23 18:55:52 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet /= 2;
		count--;
	}
	return (res);
}
