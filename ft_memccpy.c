/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:52:57 by ealves-d          #+#    #+#             */
/*   Updated: 2021/05/17 17:52:57 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*auxdest;
	unsigned char	*auxsrc;
	size_t			i;

	i = 0;
	auxdest = (unsigned char *)s1;
	auxsrc = (unsigned char *)s2;
	while (i < n)
	{
		auxdest[i] = auxsrc[i];
		if (auxdest[i] == (unsigned char)c)
			return (&auxdest[i] + 1);
		i++;
	}
	return (0);
}
