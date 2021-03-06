/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:05:15 by ahoussei          #+#    #+#             */
/*   Updated: 2018/04/25 22:17:10 by ahoussei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == '\n' || c == ' ' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}
