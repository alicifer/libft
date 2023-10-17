/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:41:46 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/02 14:47:59 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[j]);
	j--;
	while (j >= 0 && s[j])
	{
		if (s[j] == (char)c)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}

/* int main ()
{
	int c = 'l';
	const char *s = "holala Car";
	printf("C = %d.\n", c);
	printf("ocurrencia %s.\n", ft_strrchr(s, c));
	printf("ocurrencia %s.\n", strrchr(s, c));
	
} */
