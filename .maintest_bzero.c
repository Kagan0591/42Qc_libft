/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_bzero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:56:54 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/27 22:06:16 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 *-La fonction permet d'écrire des zéros dans une plage d'espaces mémoire au
 * préalable définie.
 *
 * Prototype **
 *- - void ft_bzero(void *s, size_t n)
 *
 * Protection **
 *-La fonction ne fait qu'un appel de fonction de ft_memset().
 *
 * Gestion de l'alloc dynamique de la mémoire **
 *-Aucune allocation dynamique n'est effectuée.
 *
 * Retour **
 *-La fonction ne retourne rien
 *
 * Compiler **
 *- - gcc -Wall -Wextra -Werror -o testing123 ft_bzero.c ft_memset.c maintest_bzero.c
*/

/* Arguements variadiques :
 * argv[1] = entrer un arguement, et voyez le résultat.
*/
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	int	len;

	len = ft_strlen(argv[1]);
	ft_bzero(argv[1], len);
	ft_putstr(argv[1]);
	return (0);
}