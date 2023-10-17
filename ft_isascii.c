/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:52:49 by alicifer          #+#    #+#             */
/*   Updated: 2023/09/28 09:31:26 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{	
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
//int main ()
//{
//	int c = 1215550;
//	printf("ft ascii %d.\n", ft_isascii(c));
//	printf("st ascii %d.\n", isascii(c));
//	return (0);
//}