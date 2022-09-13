/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:41:53 by zmrabet           #+#    #+#             */
/*   Updated: 2022/07/25 10:19:59 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] += 32;
			}
			if ((str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A'
					|| str[i - 1] > 'Z') && (str[i - 1] < 48
					|| str[i - 1] > 57))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
