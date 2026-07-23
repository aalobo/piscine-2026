/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 18:02:38 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/22 18:32:47 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	count;
	int	resultat;

	i = 0;
	signe = 1;
	count = 0;
	resultat = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (resultat * 10) + (str[i] - '0');
		i++;
	}
	if (count % 2 == 1)
		signe = -signe;
	return (resultat * signe);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_atoi("  --+-+1234ab567"));
}*/
