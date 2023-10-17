/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:17:14 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/04 09:22:57 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/* int main ()
{
	char d[] = "Hola";
	char s[] = "Chau";
	ft_memcpy(d, s, 4);
	printf("ft_memcpy %s\n", d);	
	char d1[] = "Hola";
	char s1[] = "Chau";
	memcpy(d1, s1, 4);
	printf("st_memcpy %s\n", d1);
	return (0);	
} */