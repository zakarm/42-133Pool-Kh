/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:13:21 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/21 12:27:28 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_digitnumb(int nb)
{
	int	slot1;
	int	slot2;

	if (nb > 9)
	{
		slot1 = nb / 10;
		slot2 = nb % 10;
		ft_putchar(slot1 + 48);
		ft_putchar(slot2 + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_digitnumb(i);
			ft_putchar(' ');
			ft_digitnumb(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++j;
		}
		++i;
	}
}
