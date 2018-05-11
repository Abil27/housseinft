/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 17:43:14 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/09 17:43:26 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (&((unsigned char*)s)[i]);
		i++;
	}
	return (NULL);
}

int main () {
   const char str[] = "http://www.42.us.org";
   const char ch = '2';
   char *ret;

   ret = ft_memchr(str, ch, 20);

   printf("String after %c is - :%s\n", ch, ret);

   return(0);
}