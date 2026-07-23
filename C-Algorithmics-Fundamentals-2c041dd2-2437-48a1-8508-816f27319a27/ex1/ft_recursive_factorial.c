/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:42:06 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 10:12:38 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	a = a * ft_recursive_factorial(nb - 1);
	return (a);
}
/*
int     main()
{
        printf("%d",(ft_recursive_factorial(-3)));
}*/
