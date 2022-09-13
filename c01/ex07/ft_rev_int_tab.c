/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:04:45 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/21 21:08:49 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	data;
	int	inc;

	i = 0;
	inc = size - 1;
	while (i < size / 2)
	{
		data = tab[i];
		tab[i] = tab[inc];
		tab[inc] = data;
		inc --;
		i ++;
	}
}
