/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:41:05 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 08:41:14 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_length(int nb)
{
	if (nb < 0)
		nb = nb * -1;
	if (nb <= 9)
		return (1);
	else
		return (int_length(nb / 10) + 1);
}
