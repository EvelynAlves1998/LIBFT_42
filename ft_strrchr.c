/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:29:40 by ealves-d          #+#    #+#             */
/*   Updated: 2021/05/22 22:29:40 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	int		i;

	p = (char *)str;
	i = ft_strlen(str);
	if (c == '\0')
		return (&p[i]);
	while (i >= 0)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i--;
	}
	return (0);
}
