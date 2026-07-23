/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 14:01:49 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/09 11:21:34 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	alpha_numeric(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= '0' && str[i] <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || alpha_numeric(&str[i - 1]) == 0)
		{
			ft_strupcase(&str[i]);
		}
		if (alpha_numeric(&str[i - 1]) == 1)
		{
			ft_strlowcase(&str[i]);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Hello, How Are You DoIng? 42words Forty-Two; Fifty+And+One";
	printf("%s", ft_strcapitalize(str));
}*/
