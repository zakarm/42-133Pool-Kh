/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:29:26 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/31 22:21:11 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		if (nb > 0)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		else
		{
			return (1);
		}
	}
}
