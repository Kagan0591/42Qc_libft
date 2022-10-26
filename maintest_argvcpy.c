/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_argvcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:26:49 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/25 22:44:21 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 * La fonction permet de copier la chaine de charactère 2D des arguments
 * variadiques passé en paramètre.
 *
 * Prototype **
 *  - char **ft_argv_cpy(char **)
 *
 * Protection **
 * En cas de string d'entrée NULL, la fonction renvoie NULL également.
 *
 * Gestion de l'alloc dynamique de la mémoire **
 * La fonction alloue de la mémoire a l'aide de malloc.
 * C'est à l'utilisateur de libérer la mémoire.
 * Elle est alloué sur les variables suivantes :
 *  - Valeur de retour (char **) ;
 *  - Chaques tableaux du tableau en valeur de retour (char **) ::
 *
 * Retour **
 * La fonction retourne la copy du tableau 2D passé en paramètre (l'argv) et
 * sa longeur également passé en paramtère (argc).
 *
 * Compiler **
 *  - gcc -Wall -Wextra -Werror -o testing123 ft_argvcpy.c ft_putstr_nl.c
 * ft_putchar.c ft_strdup.c ft_strlcpy.c ft_strlen.c maintest_argvcpy.c
*/

/* Arguements variadiques : Sans préference, une simple string.
*/

#include "libft.h"

int	main(int argc, char **argv)
{
	char	**argv_cpy;
	int	i;

	i = 0;
	argv_cpy = ft_argvcpy(argc, argv);
	while(i < argc)
	{
		ft_putstr_nl(argv_cpy[i]);
		i++;
	}
	return (0);
}