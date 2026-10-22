/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:04:48 by username          #+#    #+#             */
/*   Updated: 2026/10/14 14:26:14 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		*destr;

	i = 0;
	str = (const unsigned char *) src;
	destr = (unsigned char *) dest;
	while (i < n)
	{
		destr[i] = str[i];
		i++;
	}
	return (dest);
}
