/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:50:05 by ealves-d          #+#    #+#             */
/*   Updated: 2021/05/17 17:50:05 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy( void *dest, const void *source, size_t n)
{
	unsigned char	*psource;
	unsigned char	*pdest;
	size_t			i;

	i = 0;
	psource = (unsigned char *)source;
	pdest = (unsigned char *)dest;
	if (pdest == psource)
		return (0);
	while (i < n)
	{
		pdest[i] = psource[i];
		i++;
	}
	return (pdest);
}
