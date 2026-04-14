/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:49:22 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/13 14:34:24 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	j;

	j = 0;
	while (len && *big)
	{
		while (big[j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
        const char *smallstring = "Bar";
        char *ptr;

        ptr = ft_strnstr(largestring, smallstring, 110);
	printf("%s\n", ptr);
        ptr = strnstr(largestring, smallstring, 110);
	printf("%s\n", ptr);
}*/
