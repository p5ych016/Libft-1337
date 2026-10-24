/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:05:35 by username          #+#    #+#             */
/*   Updated: 2026/10/14 20:33:51 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if (dest_len >= dsize)
		return (src_len + dsize);
	while (src[i] && j + 1 < dsize)
	{
		dest[j++] = src[i++];
	}
	if (dsize > dest_len)
		dest[j] = '\0';
	return (dest_len + src_len);
}
