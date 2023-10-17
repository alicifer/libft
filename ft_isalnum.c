/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:49:02 by alicifer          #+#    #+#             */
/*   Updated: 2023/09/29 09:21:07 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
//int main ()
//{
//int c = 1;
//printf("ft ascii %d.\n", ft_isalnum(c));
//printf("st ascii %d.\n", isalnum(c));
//return (0);
//}
