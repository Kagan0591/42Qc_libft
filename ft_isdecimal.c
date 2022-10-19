/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdecimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:37:10 by tchalifo          #+#    #+#             */
/*   Updated: 2022/10/19 09:02:35 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisdecimal(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else if (str[i] == '.' && str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
		{
			bool = 1;
			break ;
		}
	}
	return (bool);
}
