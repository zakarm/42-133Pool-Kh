/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:11:37 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/31 22:20:05 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	data;

	i = 1;
	data = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		data = i * data;
		i++;
	}
	return (data);
}
