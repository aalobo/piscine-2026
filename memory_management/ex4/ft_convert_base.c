/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 12:47:46 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/20 15:32:19 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_is_valid(char *base)
{
	int (a) = ft_strlen(base);
	int (i) = 0;
	int (k) = i + 1;
	if (a < 2)
		return (0);
	while (base[i])
	{
		while (base[k])
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
		k = i + 1;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_index_of(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(char *nbr, char *base_from)
{
	long	result;
	int		taille;
	int		signe;
	int		i;

	signe = 1;
	result = 0;
	i = 0;
	taille = ft_strlen(base_from);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			signe = -signe;
		i++;
	}
	while (ft_index_of(nbr[i], base_from) != -1)
	{
		result = result * taille + ft_index_of(nbr[i], base_from);
		i++;
	}
	return (result * signe);
}
