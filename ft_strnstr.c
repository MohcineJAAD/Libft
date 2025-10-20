/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-20 14:23:37 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-20 14:23:37 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;

	if (!(*little))
		return ((char *)big);
	littlelen = ft_strlen(little);
	while (*big && len)
	{
		if (len < littlelen)
			return (0);
		if (ft_strncmp(big, little, littlelen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
