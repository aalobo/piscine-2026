/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:19:52 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 11:22:14 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include<stdio.h>
// int	main()
// {
// 	int a = 45;
// 	int	b = 7;
// 	int	c = 0;
// 	int d = 0;
// 	ft_div_mod(a,b,&c,&d);
// 	printf("%d, %d" , c, d);
// }