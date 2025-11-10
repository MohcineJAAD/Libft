/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-19 17:43:49 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-19 17:43:49 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	counter;

	counter = 0;
	if (!dst && !size)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size == 0 || size <= dlen)
		return (slen + size);
	dst += dlen;
	while (*src && (counter++ < size - dlen - 1))
		*dst++ = *src++;
	*dst = '\0';
	return (dlen + slen);
}
