/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:07:11 by ealves-d          #+#    #+#             */
/*   Updated: 2021/05/20 16:07:11 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)str;
	while (p[i] != 0)
	{
		i++;
	}
	return (i);
}
