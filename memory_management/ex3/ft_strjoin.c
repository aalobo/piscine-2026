/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:07:26 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/20 20:11:24 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char *strs[4]={"My", "name","is", "ARTHUR"};
	char *sep="-----";
	char *printo=ft_strjoin(4, strs, sep);
	printf("%s", printo);
}
