/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:06:10 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/13 12:25:15 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int	any(char	*ch)
{
	return *ch % 2;
}

int	main(void)
{
	int	tab[2] = {1, 3};
	ft_count_if(tab, 2, any);
}*/
