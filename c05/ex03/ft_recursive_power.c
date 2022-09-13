/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 05:00:34 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/02 19:09:39 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else
	{
		if (power == 1)
			return (nb);
		else if (power < 0)
			return (0);
		else if (power > 1)
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
