/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/19 09:03:46 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_argvcpy(int argc, char **argv)
{
	char	**argv2;
	int		i;

	i = 0;
	argv2 = malloc(sizeof(char *) * argc);
	while (argc >= 0)
	{
		argv2[i] = argv[i];
		argc--;
		i++;
	}
	return (argv2);
}
