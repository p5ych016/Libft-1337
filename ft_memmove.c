/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:05:14 by username          #+#    #+#             */
/*   Updated: 2026/10/14 14:26:20 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		*destr;

	i = 0;
	str = (const unsigned char *) src;
	destr = (unsigned char *) dest;
	if (src > dest)
	{
		while (i < n)
		{
			destr[i] = str[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destr[i] = str[i];
		}
	}
	return (dest);
}
