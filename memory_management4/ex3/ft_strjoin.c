/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:07:26 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/21 11:37:54 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + ft_strlen(sep) * (size - 1);
	return (total + 1);
}

int	ft_copy(char *result, int k, char *source)
{
	int	j;

	j = 0;
	while (source[j])
	{
		result[k] = source[j];
		k++;
		j++;
	}
	return (k);
}

char	*ft_empty_str(void)
{
	char	*result;

	result = malloc(sizeof(char) * 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		k;

	if (size == 0)
		return (ft_empty_str());
	result = malloc (sizeof(char) * ft_total_length(size, strs, sep));
	if (result == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		if (i > 0)
			k = ft_copy(result, k, sep);
		k = ft_copy(result, k, strs[i]);
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
int main()
{
	char *strs[4]={"My", "name","is", "ARTHUR"};
	char *sep="-----";
	char *printo=ft_strjoin(4, strs, sep);
	printf("%s", printo);
}*/
