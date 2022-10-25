/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/25 16:46:42 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_argvcpy(int argc, char **argv)
{
	char	**argv2;
	int		i;

	i = 0;
	i = 0;
	argv2 = malloc((argc + 1) * sizeof(char *));
	if (argv2 == NULL)
		return (NULL);
	while (argv[i] != NULL)
	{
		argv2[i] = ft_strdup(argv[i]);
		i++;
	}
	argv[i] = NULL;
	return (argv2);
}

int	main(int argc, char **argv)
{
	char **test;

	printf("bob\n");
	test = ft_argvcpy(argc, argv);
	printf("%s\n", test[0]);
	return(0);
}