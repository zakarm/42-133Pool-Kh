/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:17:45 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/01 01:03:30 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		if (index == 1)
		{
			return (1);
		}
		else
		{
			if (index == 0)
			{
				return (0);
			}
		}
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
