/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:45 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/02 13:10:06 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(dst);
	j = 0;
	if (dstsize > 0 && dstsize > len)
	{
		i = len;
		j = 0;
		while (src[j] && i < (dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}

/* #include<string.h>
int main ()
{
	char d[] = "Hola amigos ";
	const char s[] = "kjjjjfkkjjdfkjddddddddddddddios";
	size_t nb = 130;
	char d1[] = "Hola amigos ";
	const char ds[] = "kjjjjfkkjjdfkjddddddddddddddios";
	
	printf("%zu\n", ft_strlcat(d, s, nb));
	printf("%zu\n", strlcat(d1, ds, nb));
	return (0);
} */
