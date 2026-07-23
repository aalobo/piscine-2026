/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:16:01 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 10:16:55 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
/*
int	main()
{
	printf("%d",(ft_iterative_factorial(-5)));
}*/
