/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:39:49 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/21 14:40:39 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	data;

	data = *a;
	*a = *b;
	*b = data;
}
