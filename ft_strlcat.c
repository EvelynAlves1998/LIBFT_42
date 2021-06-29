/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:19:28 by ealves-d          #+#    #+#             */
/*   Updated: 2021/05/20 22:19:28 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	tsrc;
	size_t	tdst;
	size_t	j;
	size_t	i;

	tdst = ft_strlen(dst);
	tsrc = ft_strlen(src);
	j = 0;
	i = tdst;
	 if (tdst == tsrc)
		return (0);
	if (size != 0 && i < (size - 1))
	{
		while (i < (size - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
	}
	if (tdst > size)
		return (tsrc + size);
	return (tdst + tsrc);
}
