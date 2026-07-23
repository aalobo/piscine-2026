/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificationbase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:26:02 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:54:13 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* ft_verificationbase :
 * La fonction tourne tant que la chaine de caractere n'atteint pas de \0 ou un
 * caractere autre qu'un espace ou un chiffre entre 1 et 4. 
 * Si la chaine de caractere rencontre un chiffre entre 1 et 4, si le caractere 
 * d'apres n'est pas un espace elle return 1 qui est sa valeur d'invalidation.
 * Si la chaine de caractere rencontre un espace et que le caractere apres lui
 * n'est pas un chiffre entre 1 et 4 elle return 1
 * Si la longueur finale de la chaine de caractere n'est pas exactement 31, 
 * elle return 0.
 *Autrement, elle return 0 qui est la valeur de validation
*/
int	ft_verificationbase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (1);
		if (str[i] == ' ')
			if (str[i + 1] < '1' || str[i + 1] > '4')
				return (1);
		if (!(str[i] >= '1' && str[i] <= '4') && !(str[i] == ' '))
			return (1);
		i ++;
	}
	if (i != 31)
		return (1);
	else
		return (0);
}
