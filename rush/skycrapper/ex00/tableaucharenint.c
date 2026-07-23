/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableaucharenint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:24:14 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:59:45 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* ft_tableaucharenint :
 * Si la base a ete validee prealablement, cette fonction est appelee 4 fois 
 * afin d'attribuer les valeurs contenues dans la chaine de caractere en input
 * a un tableau de int, plus facile a manipuler par la suite. La fonction 
 * parcours la chaine de caractere avec la variable i qui est un pointeur sur 
 * une variable definie dans le main, qui permet d'avoir un index
 * qui n'est pas fixe afin de ne pas a chaque fois repartir de 0.
 *
 * Elle cree un tableau res auquel elle definit une taille grace a la fonction
 * malloc, et elle ne copie la valeur que si la valeur du tableau initial est 
 * compris entre '1' et '4' a laquelle on soustrait '0' afin de recuperer cette
 * valeur en int. Afin de ne copier que 4 valeurs, elle possede une variable
 * locale qui ne s'increment que lorsqu un caractere est copie. si cette 
 * variable (index) atteint 4.
 * La fonction retourne le tableau cree.
*/
int	*ft_tableaucharenint(int *i, char *argv)
{
	int	*res;
	int	index;

	res = malloc(4 * sizeof(int));
	if (!res)
		return (NULL);
	index = 0;
	while (argv[*i])
	{
		if (argv[*i] >= '1' && argv[*i] <= '4')
		{
			res[index] = (argv[*i] - '0');
			index ++;
			(*i)++;
		}
		else
			(*i)++;
		if (index == 4)
			return (res);
	}
	return (res);
}
