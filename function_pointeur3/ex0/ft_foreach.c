/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:21:18 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/13 14:50:40 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		write(1, &c, 1);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	ft_foreach(tab, 4, &ft_putnbr);
}*/
