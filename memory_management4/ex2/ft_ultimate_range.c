/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:31:37 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/21 17:50:03 by aralobo          ###   ########.fr       */
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
	result = malloc(sizeof(int) * a);
	if (result == NULL)
		return (-1);
	while (i < a)
	{
		result[i] = min;
		min++;
		i++;
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
