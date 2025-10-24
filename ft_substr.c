/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-21 14:15:42 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-21 14:15:42 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*location;
	char	*origin;

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	location = (char *)malloc(len + 1);
	if (!(location) || !(s))
		return (NULL);
	s += start;
	origin = location;
	while (len--)
		*location++ = *s++;
	*location = '\0';
	return (origin);
}
