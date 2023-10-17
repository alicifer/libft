/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:33:30 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/03 11:06:51 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/* void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char*)str;
	while (len-- > 0)
		*(string++) = (unsigned char)c;
	return (str);
} 

se utiliza para establecer un valor esp en un bloque de memoria
para inicializar una región de memoria con un valor constante 
establece los count caracteres de des en el car c */