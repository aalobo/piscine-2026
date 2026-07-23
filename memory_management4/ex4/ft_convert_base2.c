/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:19:09 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/21 17:50:31 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_base_is_valid(char *base);
int		ft_index_of(char c, char *base);
long	ft_atoi_base(char *nbr, char *base_from);

int	ft_nbrlen_base(long n, int taille)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n = n / taille;
		length++;
	}
	return (length);
}

char	*ft_nbr_to_str(long n, char *base)
{
	char	*result;
	int		taille;
	int		len;
	int		neg;

	taille = ft_strlen(base);
	neg = 0;
	len = ft_nbrlen_base(n, taille);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	while (len > neg)
	{
		len --;
		result[len] = base[n % taille];
		n = n / taille;
	}
	if (neg)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;

	if (ft_base_is_valid(base_from) == 0 || ft_base_is_valid(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_nbr_to_str(nb, base_to));
}
/*
int	main(void)
{
	printf("%s", ft_convert_base("FF", "0123456789ABCDEF", "0123456789"));
}*/
