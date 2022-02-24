/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchalifo <tchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:59:48 by tchalifo          #+#    #+#             */
/*   Updated: 2021/10/22 10:09:55 by tchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i_s;

	i_s = 0;
	while (s && s[i_s])
	{
		write(fd, &s[i_s], 1);
		i_s++;
	}
}
