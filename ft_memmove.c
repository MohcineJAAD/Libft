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
	char	*dest_p;
	char	*src_p;
	char	buffer[n];

	dest_p = (char *)dest;
	src_p = (char *)src;
	ft_memcpy(buffer, src_p, n);
	ft_memcpy(dest_p, buffer, n);
	return (dest);
}
