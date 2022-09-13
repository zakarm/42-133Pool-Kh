/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 06:09:12 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/07 08:59:54 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*data;

	i = 0;
	j = 0;
	data = malloc(sizeof(strs));
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			data[j++] = strs[i][k++];
		}
		k = 0;
		while (sep[k] != '\0' && i < size - 1)
		{
			data[j++] = sep[k++];
		}
		i++;
	}
	data[j] = '\0';
	return (data);
}
