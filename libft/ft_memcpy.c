/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 09:25:16 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/09 11:13:00 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "abxyzef";
	char	dest[] = "oooooooooooooooo";
	char	src2[] = "abxyzef";
	char	dest2[] = "ooooooooooooo";

	printf("%s ====>", src);
	memcpy(&src[2], src, 5);
	printf(" %s\n", &src[2]);
	printf("%s ====>", src2);
	ft_memcpy(&src2[2], src2, 5);
	printf(" %s\n", &src2[2]);
}*/
