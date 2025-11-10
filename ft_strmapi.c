/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-25 17:44:28 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-25 17:44:28 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*location;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	location = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!location)
		return (NULL);
	index = 0;
	while (*s)
		*location++ = f(index++, *s++);
	*location = '\0';
	return (location - index);
}
