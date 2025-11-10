/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-20 19:13:16 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-20 19:13:16 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*location;
	char	*origin;
	size_t	len;

	len = ft_strlen(s);
	location = (char *)malloc(len + 1);
	if (!location)
		return (location);
	origin = location;
	while (*s)
		*location++ = *s++;
	*location = '\0';
	return (origin);
}
