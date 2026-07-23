/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:31:37 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/20 18:43:32 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;
	int	a;

	i = 0;
	a = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		result = malloc(sizeof(int) * a);
		while (i < a)
		{
			result[i] = min;
			min++;
			i++;
		}
	}
	*range = result;
	return (a);
}
/*
int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	size = ft_ultimate_range(&tab, 5, 12);
	i = 0;
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
