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

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	counter = 0;
	if (size <= dlen)
		return (slen + size);
	dst += dlen;
	while (*src && (counter++ < size - dlen - 1))
		*dst++ = *src++;
	*dst = '\0';
	return (dlen + slen);
}
