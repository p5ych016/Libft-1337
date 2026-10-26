/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayouikan <ayouikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:44:57 by ayouikan          #+#    #+#             */
/*   Updated: 2026/10/26 13:30:35 by ayouikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	found = 0;
	while (s1[i] && !found)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
		{
			found = 1;
			return (i);
		}
		i++;
	}
	return (-1);
}

static int	ft_end(char const *s1, char const *set, int start)
{
	int	i;
	int	j;
	int	found;

	i = ft_strlen(s1) - 1;
	found = 0;
	while (i >= start && !found)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
		{
			found = 1;
			return (i);
		}
		i--;
	}
	return (start - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*btw;
	int		len_btw;
	int		i;

	start = ft_start(s1, set);
	if (start == -1)
		return (ft_strdup(""));
	end = ft_end(s1, set, start);
	len_btw = end - start + 1;
	btw = malloc(len_btw + 1);
	if (!btw)
		return (NULL);
	i = 0;
	while (i < len_btw)
	{
		btw[i] = s1[start + i];
		i++;
	}
	btw[i] = '\0';
	return (btw);
}
