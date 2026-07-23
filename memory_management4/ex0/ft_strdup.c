/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:05:00 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/21 13:24:29 by aralobo          ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		a;
	char	*out;

	i = 0;
	if (!src)
		return (NULL);
	a = ft_strlen(src);
	out = malloc(sizeof(char) * (a + 1));
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
/*
int 	main(void)
{
	char src[] = "(null)";
	printf("%s",ft_strdup(NULL));
}*/
