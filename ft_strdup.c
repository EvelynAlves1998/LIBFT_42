/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 21:28:29 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/08 21:28:29 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	n;

	n = ft_strlen((char *)s1);
	dst = malloc(ft_strlen(s1) + 1);
	if (dst == 0)
		return (0);
	ft_memcpy(dst, s1, n + 1);
	return (dst);
}
