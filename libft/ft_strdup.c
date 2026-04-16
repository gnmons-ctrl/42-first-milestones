/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:54:11 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/16 13:08:45 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	int		i;

	i = 0;
	len = 0;
	if (s)
		len = ft_strlen(s);
	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
		return (dup);
	while (s && s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "blabla bar baz";
	char	*test1;
	char	*test2;

	test1 = strdup(str);
	test2 = ft_strdup(str);
	printf("strdup: %s\n", test1);
	printf("ft_strdup: %s\n", test2);
	free(test1);
	free(test2);
}*/
