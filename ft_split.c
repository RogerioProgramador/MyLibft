/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogeriorslf <rogeriorslf@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 00:45:31 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/05/31 22:30:41 by rogeriorslf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc(char *s, char c)
{
	char	**words;
	int		nb;

	nb = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			nb++;
		}
		if (*s)
			s++;
	}
	words = (char **)ft_calloc(nb + 1, sizeof(char *));
	if (!words)
		return (NULL);
	return (words);
}

char	**fill_array(char **splitted, char *s, char c, size_t i[2])
{
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
			{
				i[0]++;
				s++;
			}
			splitted[i[1]] = ft_calloc((i[0] + 1), sizeof(char));
			if (!splitted[i[1]])
			{
				free_all(splitted);
				splitted = NULL;
				return (splitted);
			}
			ft_nstrcpy(splitted[i[1]++], (s - i[0]), c);
			i[0] = 0;
		}
		if (*s)
			s++;
	}
	return (splitted);
}

char	**ft_split(const char *s, char c)
{
	char	**splitted;
	char	*pointer;
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	if (s == NULL)
		return (NULL);
	pointer = (char *)s;
	splitted = alloc(pointer, c);
	if (splitted == NULL)
	{
		free(splitted);
		return (NULL);
	}
	splitted = fill_array(splitted, pointer, c, i);
	if (splitted == NULL)
	{
		free(splitted);
		return (NULL);
	}
	return (splitted);
}
