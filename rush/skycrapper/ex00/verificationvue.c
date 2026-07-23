/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificationvue.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:14:15 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:59:17 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*ft_combienvisible :
 * La fonction prend un tableau en argument, ce tableau est une ligne ou une 
 * colonne de la grille. Le nombre de batiment visible augmente si la case 
 * d'apres du tableau est superieur a la premiere. Afin d'eviter de compter des
 * cases de trop si l,on se basait toujours sur la premiere et que le 4
 * tombait en deuxieme, la variable max devient notre nouvel outil de 
 * comparaison. Ainsi, jamais le compteur n'augmentera puisque max aura une 
 * valeur de 4 et que c'est le maximum. La variable retourne le nombre de 
 * batiment visible
 *
 * ft_verifcolonne :
 * La fonction verifie combien de batiment sont visible en fonction des 
 * differentes vues des colonnes et la compare avec la valeur attendu contenue 
 * dans le tableau up ou down, creer prealablement a partir des arguments du 
 * main Les colonnes n'etant pas directement des tableaux puisque nous sommes
 * passes par un tableau a deux dimension, nous avons besoin de creer des
 * tableaux temporaires contenant la valeur des tableaux lignes en fonction des
 * colonnes. Une fois le tableau creer, elle l'envoie a la fonction 
 * ft_combienvisible afin de connaitre le resultat, Une fois comparer avec la
 * valeur attendu, si le resultat est bon, elle test la colonne mais en partant 
 * de l'autre point du vu (down). la comparaison avec les inputs envoyes n'est 
 * pas correcte, elle return 0 qui est sa valeur d'invalidation.
 * Sinon, apres avoir tester toutes lees colonnes grace a la boucle initiale
 * colonne < 4, elle return 1 qui est sa valeur de validation
 *
 * ft_verifligne :
 * Meme fonctionnement mais pas besoin de creer des tableau temporaire pour 
 * les lignes de gauches, car elles correspondent au tableau initial, par 
 * contre, elle a besoin de creer un tableau temporaire contenant les 
 * valeurs inversees afin de tester l'autre point de vu
*/

int	ft_combienvisible(int *tab)
{
	int	max;
	int	count;

	count = 1;
	max = tab[0];
	if (max < tab[1])
	{
		max = tab[1];
		count ++;
	}
	if (max < tab[2])
	{
		max = tab[2];
		count ++;
	}
	if (max < tab[3])
		count ++;
	return (count);
}

int	ft_verifcolonne(int grille[4][4], int *up, int *down)
{
	int	(temp[4]);

	int (i) = 0;
	int (colonne) = 0;
	while (colonne < 4)
	{
		while (i < 4)
		{
			temp[i] = grille[i][colonne];
			i ++;
		}
		if (ft_combienvisible(temp) != up[colonne])
			return (0);
		i = 3;
		while (i >= 0)
		{
			temp[3 - i] = grille[i][colonne];
			i --;
		}
		if (ft_combienvisible(temp) != down[colonne])
			return (0);
		colonne ++;
		i = 0;
	}
	return (1);
}

int	ft_verifligne(int grille[4][4], int *left, int *right)
{
	int	temp[4];

	int (i) = 0;
	int (j) = 0;
	int (ligne) = 0;
	while (ligne < 4)
	{
		if (ft_combienvisible(grille[ligne]) != left[ligne])
			return (0);
		i = 3;
		while (i >= 0)
		{
			temp[j] = grille[ligne][i];
			i --;
			j ++;
		}
		if (ft_combienvisible(temp) != right[ligne])
			return (0);
		ligne ++;
		i = 0;
		j = 0;
	}
	return (1);
}
