/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_ft_memset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:05:47 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/27 21:52:27 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***** Mini MAN *****/
/*
 *-La fonction permet d'écrire des caractères définie par l'utilisateur dans
 * une plage d'espaces mémoire au préalable définie.
 *
 * Prototype **
 *- - void ft_memset(void *s, size_t n)
 *
 * Protection **
 *-La variable size_t permet de donner une longeur à la plage d'adresses
 * mémoires à traiter. C'est a l'utilisateur de s'assurer de donner la bonne
 * longeur de chaine de caractère.
 *
 * Gestion de l'alloc dynamique de la mémoire **
 *-Aucune allocation dynamique n'est effectuée.
 *
 *  Retour **
 *-La fonction retourne le pointeur (void *).
 *
 * Compiler **
 *- - gcc -Wall -Wextra -Werror -o testing123 ft_memset.c maintest_ft_memset.c
*/

#include "libft.h"

int	main(void)
{
	char	str[] = {'a','l','l','o'};

	ft_memset(str, 't', 4);
	ft_putstr(str);
	return (0);
}
