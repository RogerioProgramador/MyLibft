/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ncalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:41:06 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 09:44:55 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_ncalloc(size_t count, size_t size, char c)
{
	char	*pointer;
	size_t	a;
	size_t	n;

	a = 0;
	n = count * size;
	pointer = malloc(n);
	if (pointer == NULL)
		return (NULL);
	while (a < (n - 1))
	{
		pointer[a] = c;
		a++;
	}
	pointer[a] = '\0';
	return (pointer);
}
