/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:18:52 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/13 14:59:25 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	croissant;
	int	decroissant;

	i = 0;
	croissant = 1;
	decroissant = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		i++;
	}
	if ((croissant == 1) || (decroissant == 1))
		return (1);
	else
		return (0);
}
/*
int	cmp(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int	main(void)
{
	int	tab[13] = {-93, -87, -60, -37, -9, 19, 35, 66, 66, 76, 89, 89, 98};
	printf("%d",ft_is_sort (tab,13 , cmp));
}*/
