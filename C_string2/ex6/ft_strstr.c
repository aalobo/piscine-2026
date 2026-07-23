/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 19:00:35 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/22 21:09:38 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "aaaajkaaabbbhgbbbbbccccddddeopeeee";
	printf("test 1 :%s\n", ft_strstr(str, "jk"));
	printf("test 2 :%s\n", ft_strstr(str, "hg"));
	printf("test 3 :%s\n", ft_strstr(str, "op"));
}*/
