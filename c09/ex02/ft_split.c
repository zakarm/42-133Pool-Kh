/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:49:16 by zmrabet           #+#    #+#             */
/*   Updated: 2022/08/10 22:14:52 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	len_to_extract(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !in_charset(str[i], charset))
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && in_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !in_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*extract_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = len_to_extract(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		len;

	i = 0;
	len = count_words(str, charset);
	strs = (char **)malloc(sizeof(char *) * (len + 1));
	while (*str)
	{
		while (*str && in_charset(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = extract_word(str, charset);
			i++;
		}
		while (*str && !in_charset(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
