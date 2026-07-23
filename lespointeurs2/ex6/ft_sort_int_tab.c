/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:06:39 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/07 09:40:30 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0 ;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	tab[19] = {10, 62, 97, 33, 4, 0, 18 ,84};
	i = 0;
	ft_sort_int_tab(tab, 19);
	while(i < 19)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
