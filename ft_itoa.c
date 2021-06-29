/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 22:21:13 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/25 22:21:13 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_nblen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nb;
	int		len;

	len = ft_nblen(n);
	nb = n;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		p[0] = '0';
	p[len--] = '\0';
	while (nb)
	{
		p[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (p);
}
