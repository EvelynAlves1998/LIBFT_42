/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:50:57 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/03 15:50:57 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[j])
	{
		i = 0;
		while (haystack[j + i] == needle[i] && (j + i) < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
