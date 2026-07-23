/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:14:26 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/20 15:26:05 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_countwords(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 0 && (i == 0
				|| ft_is_sep(str[i - 1], charset) == 1))
			count++;
		i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && ft_is_sep(str[len], charset) == 0)
		len++;
	return (len);
}

char	*ft_word_dup(char *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * ft_countwords(str, charset) + 1);
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) == 1)
			i++;
		else
		{
			len = ft_word_len(&str[i], charset);
			result[j] = ft_word_dup(&str[i], len);
			j++;
			i = i + len;
		}
	}
	result[j] = '\0';
	return (result);
}
/*
int	main(void)
{
	int	i;
	char	**tab;
	char	*charset = " ;-.";
	char str[] = "bonjour je.suis-a;42";
	tab = ft_split(str, charset);
	i=0;

	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
