/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:07:56 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/14 13:04:34 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, nmemb);
	return (ptr);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	void	*ptr;
	void	*ptr2;
	char	*str;
	char	*str2;
	size_t nmemb = 1;
	size_t size = 0;

	ptr = calloc(nmemb, size);
	ptr2 = ft_calloc(nmemb, size);
	str = (char *)ptr;
	str2 = (char *)ptr2;

	printf("calloc: %p\n", str);
	printf("%s\n", str);
	printf("ft_calloc: %p\n", str2);
	printf("%s\n", str2);
	free(ptr);
	free(ptr2);
}*/
