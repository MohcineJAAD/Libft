/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-23 10:38:51 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-23 10:38:51 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	counter;
	int		flag;

	counter = 0;
	flag = 0;
	while (*s)
	{
		if (*s++ == c)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			counter++;
		}
	}
	return (counter);
}

void	*ft_free_previus(char **base_address, char **increment_address)
{
	int	i;

	i = 0;
	while (base_address + i < increment_address)
	{
		free(base_address[i]);
		i++;
	}
	free(base_address);
	return (NULL);
}

size_t	ft_wordlen(const char *w, char c)
{
	size_t	len;

	len = 0;
	while (*w && *w != c)
	{
		len++;
		w++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char		**table;
	char		**base_address;
	size_t		len;

	if (!s)
		return (0);
	table = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!table)
		return (NULL);
	base_address = table;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!(*s))
			break ;
		len = ft_wordlen(s, c);
		*table = ft_substr(s, 0, len);
		s += len;
		if (!(*table))
			return (ft_free_previus(base_address, table));
		table++;
	}
	*table = NULL;
	return (base_address);
}
