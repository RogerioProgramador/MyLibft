/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:39:07 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 08:48:03 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest2;

	dest2 = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	dest = dest2;
	return (dest);
}
