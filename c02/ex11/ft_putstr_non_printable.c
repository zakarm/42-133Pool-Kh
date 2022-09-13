/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:59:07 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/09 21:55:23 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	dechex(char c)
{
	if (c <= 9)
		return ('0' + c);
	return ('a' + c - 10);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			hex = dechex(str[i] / 16);
			write(1, &hex, 1);
			hex = dechex(str[i] % 16);
			write(1, &hex, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
