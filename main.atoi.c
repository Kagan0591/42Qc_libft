/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:11:50 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/25 23:02:42 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 * La fonction permet de convertir un nombre entier dans une chaine de
 * charactère en integrer.
 *
 * Prototype **
 *  - int ft_atoi(const char *str)
 *
 * Protection **
 * Une simple vérification des caractères est effectué. Advenant que le
 * caractère ne soit pas un chiffres de 0 à 9 n'y un "whitespace"
 * (espace, tabulation, retour de ligne, etc...) et n'y les symboles
 * '-' && '='. Les caractères seront ignoré s'il ne correspondes pas à ces
 * derniers. Lors de la convertion des charactères, si un caractère autre
 * qu'un nombre est rencontré, la fonction retournera ce qu'il a pu convertir.
 *
 * Gestion de l'alloc dynamique de la mémoire **
 * Aucune allocation dynamique n'est effectuée.
 *
 * Retour **
 * La fonction retourne le integrer représentant le nombre passé en paramètre.
 *
 * Compiler **
 *  - gcc -Wall -Wextra -Werror -o testing123 ft_argvcpy.c ft_putstr_nl.c
 * ft_putchar.c ft_strdup.c ft_strlcpy.c ft_strlen.c maintest_argvcpy.c
*/

/* Arguements variadiques :
 * argv[1] = Integrer between -2 147 483 610 && 2 147 483 647
*/

#include "libft.h"

int	main(int argc, char **argv)
{
	int		num_converted;

	num_converted = ft_atoi(argv[1]);
	printf("The number entered is : %d\n", num_converted);
	return (0);
}