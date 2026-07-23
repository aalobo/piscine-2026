/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuchs <rfuchs@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 00:41:24 by rfuchs            #+#    #+#             */
/*   Updated: 2026/07/12 03:53:16 by rfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fichier .h qui permet de mettre les prototypes des fonctions dans un seul
* fichier afin que les fichiers soient "lies" entre eux grace au
* #include "rush.h" present dans tous les fichiers
*/
#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_peutmettrechiffre(int sudoku[4][4], int ligne, int colonne, int valeur);
int	ft_resolver(int grille[4][4], int indice, int **colrow);
int	*ft_tableaucharenint(int *i, char *argv);
int	ft_verificationbase(char *str);
int	ft_combienvisible(int *tab);
int	ft_verifcolonne(int grille[4][4], int *up, int *down);
int	ft_verifligne(int grille[4][4], int *left, int *right);

#endif
