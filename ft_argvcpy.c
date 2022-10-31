/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:44:06 by tchalifo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/10/25 16:51:47 by tchalifo         ###   ########.fr       */
=======
/*   Updated: 2022/10/25 22:14:38 by tchalifo         ###   ########.fr       */
>>>>>>> 7798e044b10416d7ad65c4e85c4173c7efaf6bee
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

int	main(int argc, char **argv)
{
	char **test;

	printf("bob\n");
	test = ft_argvcpy(argc, argv);
	printf("%s\n", test[2]);
	return(0);
}