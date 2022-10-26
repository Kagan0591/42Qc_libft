/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/25 22:14:38 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	argv[i] = NULL;
	return (argv_cpy);
}
