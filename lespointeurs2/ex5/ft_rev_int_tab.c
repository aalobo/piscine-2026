/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:45:44 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 16:51:00 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size = size - 1;
	while (i <= (size / 2))
	{
		ft_swap(&tab[i], &tab[size - i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	tab[]={1, 5, 8, 6, 3};
	ft_rev_int_tab(tab, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%d", tab[i]);
	}
}*/
