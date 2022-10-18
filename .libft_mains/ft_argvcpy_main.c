/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:28:43 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/18 09:29:37 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(int argc, char **argv)
{
	char **argv2;

	printf("%d\n", argc);
	argv2 = ft_argvcpy(argc, argv);
	printf ("%s", argv2[2]);
	return 0;
}