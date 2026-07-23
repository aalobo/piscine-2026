/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:01:40 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/22 19:37:21 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	if (!par)
		return ;
	i = 0;
	while (*(par[i].str))
	{
		ft_putnbr(*(par[i]).size);
		ft_putchar('\n');
		ft_putstr(*(par[i]).str);
		ft_putchar('\n');
		ft_putstr(*(par[i]).copy);
		ft_putchar('\n');
		i++;
	}
}
