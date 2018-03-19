/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 17:31:04 by alukyane          #+#    #+#             */
/*   Updated: 2017/11/04 17:31:04 by alukyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	if (!str)
		return (NULL);
	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[3] = "ab\0";
	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return (0);
}
