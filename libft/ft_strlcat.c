/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:14:50 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/09 21:14:51 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);	
	if (dst == 0)
	       return (i);
	j = 0;
	while (j < size && dst[j])
	{
		src[i + j] = dst[j];
		j++;
	}
	if (dst[j] == 0)
		src[i + j] = 0;
	return (i + j);
}
