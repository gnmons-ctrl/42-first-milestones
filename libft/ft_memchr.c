/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:25:23 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/10 17:09:21 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdlib.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (ptr[i] && ptr[i] != c && i < n)
		i++;
	if (ptr[i] == c)
		return (&ptr[i]);
	return (NULL);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	unsigned char	*ptr;

	ptr = (unsigned char *)ft_memchr("abcdeazyx", 'z', 20);
	printf("%s\n", ptr);
}*/
