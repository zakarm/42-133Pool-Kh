/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:48:55 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/01 17:40:10 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	data;

	data = nb;
	i = 0;
	if (power == 0)
		return (1);
	else
	{
		if (power < 0)
			return (0);
		else if (power == 1)
			return (nb);
	}
	while (i < power - 1)
	{
		data *= nb;
		i++;
	}
	return (data);
}
