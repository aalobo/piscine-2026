/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 12:26:26 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/22 19:42:08 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *source)
{
	char	*dest;
	int		i;

	i = 0;
	if (source == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(source) + 1));
	if (dest == NULL)
		return (NULL);
	while (source)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct t_stock	*list;
	int				i;

	i = 0;
	list = malloc(sizeof(*list) * (ac + 1));
	if (list == NULL)
		return (NULL);
	while (i < ac)
	{
		list[i].size = strlen(av[i]);
		list[i].str = av[i];
		list[i].copy = ft_copy[av[i]];
		i++;
	}
	list[i].size = "\0";
	list[i].str = 0;
	lis[i].copy = ft_copy("\0");
	return (list);
}
