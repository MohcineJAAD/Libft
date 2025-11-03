/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaad <mjaad@student.1337.ma>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-25 12:56:25 by mjaad             #+#    #+#             */
/*   Updated: 2025-10-25 12:56:25 by mjaad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	counter;

	if (n == 0)
		return (1);
	counter = 0;
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static void	ft_fill(char *str, long n, size_t len)
{
	int	sign;

	sign = 1;
	str += --len;
	*str-- = '\0';
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		len--;
	}
	while (len--)
	{
		*str-- = (n % 10) + 48;
		n /= 10;
	}
	if (sign == -1)
		*str = '-';
}

char	*ft_itoa(int n)
{
	char	*strnbr;
	size_t	len;

	if (n >= 0)
		len = ft_nbrlen(n) + 1;
	else
		len = ft_nbrlen(n) + 2;
	strnbr = (char *)malloc(len);
	if (!(strnbr))
		return (NULL);
	ft_fill(strnbr, n, len);
	return (strnbr);
}
