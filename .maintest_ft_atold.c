/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atold.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:28:34 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/26 19:55:15 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 * La fonction permet de convertir un nombre à virgule dans une chaine de
 * charactère en long double (a virgule flottante).
 *
 * Prototype **
 *  - long double ft_atold(const char *str)
 *
 * Protection **
 * Une simple vérification des caractères est effectué. Advenant que le premier
 * caractère ne soit pas un chiffres de 0 à 9 n'y un "whitespace"
 * (espace, tabulation, retour de ligne, etc...) et n'y les symboles
 * '-' && '+', le caractère, ne corressondant à aucune de ces derniers, sera
 * ignoré. Lors de la convertion des charactères, si un caractère autre qu'un
 * nombre est rencontré, la fonction retournera ce qu'il a pu convertir.
 * De plus, les chiffres derrières la virgule seront traités similairement a ce
 * que atoi produit. Si un caractère autre qu'un chiffre est présent dans la
 * chaine, seul les chiffre précédent le dit caractère seront pris en
 * consideration. A noté que les chiffres derrières la virgule sont traités à part
 * des chiffres entiers.
 *
 * Gestion de l'alloc dynamique de la mémoire **
 * Aucune allocation dynamique n'est effectuée.
 *
 * Retour **
 * La fonction retourne le long double représentant le nombre passé en paramètre.
 *
 * Compiler **
 *  - gcc -Wall -Wextra -Werror -o testing123 ft_atold.c ft_atoi.c ft_putstr_nl.c
 * ft_putchar.c ft_strdup.c ft_strlcpy.c ft_strlen.c maintest_ft_atold.c
*/

/* Arguements variadiques :
 * argv[1] = Long double between -1.1e4932 && -1.1e4932
*/
#include "libft.h"

int	main(int argc, char **argv)
{
	long double	num_converted;

	num_converted = ft_atold(argv[1]);
	printf("The number entered is : %Lf\n", num_converted);
	return (0);

}