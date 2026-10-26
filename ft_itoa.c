/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:08:52 by username          #+#    #+#             */
/*   Updated: 2026/10/26 13:29:02 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_fill(char *str, long n, int len)
{
	int	i;

	i = len - 1;
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = ft_numlen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill(str, nbr, len);
	return (str);
}
