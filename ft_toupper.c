/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:38:52 by alicifer          #+#    #+#             */
/*   Updated: 2023/09/28 09:33:00 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c = c - 32;
	}
	return (c);
}

//#include<stdio.h>
//int main()
//{
//	int c;
//	c =  'a';
//	printf("%d.\n", c);
//	printf("%d.\n", ft_toupper(c));
//	return (0);
//
//}
