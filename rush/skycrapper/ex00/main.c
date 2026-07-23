/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:27:04 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:42:59 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/* Main :
 * creation d un pointeur vers quatre tableaux afin de creer nos tableaux 
 * contenant les arguments du main le premier va contenir colup, le deuxieme 
 * coldown, le troisieme rowleft, le quatrieme rowright.
 *
 * Verification de si l utilisateur entre plus de 2 arguments (a.out compte) 
 * si plus de 2, Error.
 * Verification de la base, si le format demande n'est pas respecte, Error.
 *
 * On remplit les tableaux grace a la fonction ft_tableaucharenint. 
 *
 * Creation de la grille de sudoku, puis appel de la fonction avec le tableau
 * remplit avec les arguments du main au prealable comme argument, avec 0 qui
 * correspond a l'indice sur lequel va commencer le tableau.
 *
 * Si la fonction n'a pas trouve de solution et na donc pas remplit la grille,
 * la premiere case sera forcement 0, donc Error.
 *
 * Fonction affichage a creer pour le moment printf
 */

int	main(int argc, char **argv)
{
	int	*colrow[4];
	int	grille[4][4];

	int (i) = 0;
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_verificationbase(argv[1]) != 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	colrow[0] = ft_tableaucharenint(&i, argv[1]);
	colrow[1] = ft_tableaucharenint(&i, argv[1]);
	colrow[2] = ft_tableaucharenint(&i, argv[1]);
	colrow[3] = ft_tableaucharenint(&i, argv[1]);
	ft_resolver(grille, 0, colrow);
	if (grille[0][0] == 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	//ft_printresultat(grille);
	for (int l = 0; l < 4; l ++)
	{
		for (int d = 0; d < 4; d ++)
			printf("%d ", grille[l][d]);
		printf("\n");
	}
}
