/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/25 12:07:55 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_argvcpy(int argc, char **argv)
{
	char	**argv2;
	int		i;

	i = 0;
	argv2 = ft_calloc(argc, sizeof(char *));
	if (!argv2)
		return (0);
	while (argv[i])
	{
		argv2[i] = ft_strdup(argv[i]);
		i++;
	}
	return (argv2);
}