/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:17:39 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/08 02:38:24 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*p;
	int	k;

	size = 0;
	if (min < max)
		size = max - min;
	else
	{
		return (NULL);
	}
	p = (int *)malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	k = 0;
	while (k < size)
	{
		p[k] = min++;
		k++;
	}
	return (p);
}
