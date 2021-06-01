/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:14:08 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/05/31 09:05:30 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (!(dest))
		return (NULL);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, s1);
	return (dest);
}
