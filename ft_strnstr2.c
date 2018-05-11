/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 03:01:26 by ahoussei          #+#    #+#             */
/*   Updated: 2018/05/08 03:02:09 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#include <stdio.h>
#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
int main(void) {
   const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar B";
  printf("found: %s\n", ft_strnstr(largestring, smallstring, 10) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(largestring, smallstring, 5) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(largestring, smallstring, 9) ? "yes" : "no");
    return 0;
}