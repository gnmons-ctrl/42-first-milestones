/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlovius <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:18:49 by nlovius           #+#    #+#             */
/*   Updated: 2026/04/10 15:50:57 by nlovius          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s) + 1;
	while (i >= 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return ((void *)0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strrchr("abcdaef", 'z'));
}*/
