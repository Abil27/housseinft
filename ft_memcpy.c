/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 01:21:09 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/03 02:09:26 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dt;
	const char	*sc;

	i = 0;
	dt = dst;
	sc = src;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}
