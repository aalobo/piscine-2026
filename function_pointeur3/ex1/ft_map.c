/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 15:41:34 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/13 12:26:06 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*out;
	int	i;

	i = 0 ;
	out = malloc(sizeof(int) * length);
	if (out == NULL)
		return (NULL);
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
