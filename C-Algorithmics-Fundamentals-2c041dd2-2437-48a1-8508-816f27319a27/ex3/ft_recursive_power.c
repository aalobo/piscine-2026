/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:25:12 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 10:19:46 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	a = a * ft_recursive_power(nb, power - 1);
	return (a);
}
/*
int     main()
{
        printf("%d",(ft_recursive_power(3,-9)));
}*/
