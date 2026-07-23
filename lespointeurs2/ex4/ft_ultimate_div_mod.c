/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:23:47 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/06 11:29:17 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
// #include<stdio.h>
// int	main()
// {
// 	int a = 45;
// 	int	b = 7;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d, %d" , a, b);
// }