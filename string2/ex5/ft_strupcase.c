/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 19:27:34 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/07 12:38:13 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20] = "abc213dgdhjkkk";
	printf("%s", ft_strupcase(str));
}*/
