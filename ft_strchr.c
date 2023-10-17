/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:12:44 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/09 13:50:41 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && (char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/* 
int main ()
{
	int c = 'l';
	const char *s = "hola Car";
	printf("C = %d.\n", c);
	printf("ocurrencia %s.\n", ft_strchr(s, c));
	printf("ocurrencia %s.\n", strchr(s, c));
} */