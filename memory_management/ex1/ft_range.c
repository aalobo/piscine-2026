/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:37:10 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/20 18:41:15 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	i;
	int	*out;

	i = 0;
	a = max - min;
	out = malloc(sizeof(unsigned int) * a);
	if (!out)
		return (NULL);
	if (min > max)
		return (NULL);
	else
	{
		while (i != a)
		{
			out[i] = min;
			min++;
			i++;
		}
		return (out);
	}
}
/*
int	main(void)
{
	int *out = ft_range(-1, 7);
	int i = 0;
	while (i < 8)
	{
		printf("%d", out[i]);
		i++;
	}
}*/
