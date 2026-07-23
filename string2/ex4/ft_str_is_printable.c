/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 19:20:35 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/07 13:41:45 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[20] = "test";
	printf("%d", ft_str_is_printable(str));
} */
