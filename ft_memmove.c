/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-15 17:03:08 by mjaad             #+#    #+#             */
/*   Updated: 2025/10/16 17:54:31 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_p;
	unsigned char	*src_p;

	dest_p = (unsigned char *)dest + n - 1;
	src_p = (unsigned char *)src + n - 1;
	if (dest > src && (src + n) >= dest)
		while (n--)
			*dest_p-- = *src_p--;
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
