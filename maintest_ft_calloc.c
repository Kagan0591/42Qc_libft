/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_ft_calloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:06:56 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/31 14:19:33 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 *-La fonction permet d'allouer de la mémoires de manière dynamique et en
 * écrivant un zéro (NULL) dans chaque(s) espace(s) mémoire(s).
 *
 * Prototype **
 *- - long double ft_calloc(const char *str)
 *
 * Protection **
 *-L'allocation de mémoire est protégé par une condition.
 *
 * Gestion de l'alloc dynamique de la mémoire **
 *-La fonction alloue de la mémoire a l'aide de malloc.
 * C'est à l'utilisateur de libérer la mémoire.
 * Elle est alloué sur les variables suivantes :
 *  - Le retour de calloc renvoie une espace mémoires définie selon les
 *    arguments lui étant passés. ;
 *
 * Retour **
 *-La fonction retourne un pointeur (void *) vers l'espace mémoire alloué.
 *
 * Compiler **
 *- - gcc -Wall -Wextra -Werror -o testing123 ft_bzero.c ft_memset.c ft_calloc.c maintest_ft_calloc.c
*/

#include "libft.h"
int	main(void)
{
	void *mem;

	mem = ft_calloc(8, sizeof(char *));
	if (!mem)
		ft_putstr("ft_calloc did not manage to allocate mémory ");
	else
		ft_putstr("ft_calloc have allocate mémory successfully");
	return (0);
}