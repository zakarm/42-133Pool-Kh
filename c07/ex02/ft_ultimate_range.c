/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 05:37:23 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/07 11:48:13 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*p;
	int	k;

	size = 0;
	if (min < max)
		size = max - min;
	else
	{
		range[0] = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (size));
	if (p == NULL)
		return (-1);
	k = 0;
	while (k < size)
	{
		p[k] = min++;
		k++;
	}
	range[0] = p;
	return (k);
}
