/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:19:26 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:48:18 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*ft_peutmettrechiffre :
 La fonction prend valeur en argument, compris entre 1 et 4, et retournera 0
 si valeur si trouve deja dans la ligne ou la colonne envoye. Si la valeur n'a
 pas de doublon dans une ligne ou une colonne, la fonction la retourne afin de 
 l'attribuer a la case.
 
 ft_resolver : 
 C est la fonction clef du programme, elle va commencer de remplir une grille
 de sudoku en demandant a la fonction du dessus si jamais elle peut mettre un 
 chiffre dans la case calculee en fonction de l'indice elle teste toutes les 
 valeurs entre 1 et 4 grace a la boucle while (valeur <= 4), si jamais elle 
 arrive a assigner une valeur, elle se rappelle elle meme a l'indice suivant 
 pour remplir la case suivant. Si aucune valeur ne reussit a etre attribue a 
 la case suivante, la fonction return 0 et revient sur la recursion precedente 
 afin de tester une nouvelle valeur.

 Si une grille finit par etre remplie, donc que l'indice est arrive a 16
 (les 16 cases ont ete remplies), Elle appelle d'abord la fonction verifcolonne
 qui verifie les differentes vues des colonnes, et seulement si les vues des
 colonnes sont ok, elle appelle la fonction verifligne qu fait la meme chose.

 Si une des conditions n'est pas respectees, la fonction return 0 et retourne
 sur la valeur precedente Si les vues sont good, la fonction return 1 et
 valide la fin de a boucle recursive definie par
 if (ft_resolver == 1) return 1. 
 Autrement, toutes les valeurs des cases sont remises a 0 et 
 la fonction return 0.
*/

int	ft_peutmettrechiffre(int sudoku[4][4], int ligne, int colonne, int valeur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (sudoku[ligne][i] == valeur)
			return (0);
		i ++;
	}
	while (j < 4)
	{
		if (sudoku[j][colonne] == valeur)
			return (0);
		j ++;
	}
	return (valeur);
}

int	ft_resolver(int grille[4][4], int indice, int **colrow)
{
	int (ligne) = 0;
	int (colonne) = 0;
	int (valeur) = 1;
	if (indice == 16)
	{
		if (ft_verifcolonne(grille, colrow[0], colrow[1]) == 0)
			return (0);
		if (ft_verifligne(grille, colrow[2], colrow[3]) == 0)
			return (0);
		return (1);
	}
	ligne = indice / 4;
	colonne = indice % 4;
	while (valeur <= 4)
	{
		if (ft_peutmettrechiffre(grille, ligne, colonne, valeur) != 0)
		{
			grille[ligne][colonne] = valeur;
			if (ft_resolver(grille, indice + 1, colrow) == 1)
				return (1);
			grille[ligne][colonne] = 0;
		}
		valeur = valeur + 1;
	}
	return (0);
}
