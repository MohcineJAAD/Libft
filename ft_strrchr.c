/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-20 10:45:34 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-20 10:45:34 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	s += slen;
	if ((unsigned char)c == '\0')
		return ((char *)s);
	while (slen--)
	{
		s--;
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
	}
	return (NULL);
}
