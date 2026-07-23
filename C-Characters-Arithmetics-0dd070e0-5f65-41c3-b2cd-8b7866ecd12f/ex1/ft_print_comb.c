/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 10:10:53 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/03 09:38:58 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** *030.00.0/

#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = i + '0';
	b = j + '0';
	c = k + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(i == 7))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_write(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	ft_print_comb();
}*/
