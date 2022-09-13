/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:11:36 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/23 10:47:21 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	data;

	i = 0;
	while (i < size)
	{
		n = 0;
		while (n < size)
		{
			if (tab[i] < tab[n])
			{			
				data = tab[i];
				tab[i] = tab[n];
				tab[n] = data;
			}
			n++;
		}
		i++;
	}
}
