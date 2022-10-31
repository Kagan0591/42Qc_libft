/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/31 14:55:41 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	**ft_argvcpy(int argc, char **argv)
{
	char	**argv_cpy;
	int		i;

	i = 0;
	argv_cpy = malloc((argc + 1) * sizeof(char *));
	if (argv_cpy == NULL)
		return (NULL);
	while (argv[i] != NULL)
	{
		argv_cpy[i] = ft_strdup(argv[i]);
		i++;
	}
	argv_cpy[i] = NULL;
	return (argv_cpy);
}
