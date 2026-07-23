/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralobo <aralobo@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:42:41 by aralobo           #+#    #+#             */
/*   Updated: 2026/07/09 10:41:15 by aralobo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			put_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
void main()
{
	ft_putstr_non_printable("Helloz\nhow are you");
}*/
