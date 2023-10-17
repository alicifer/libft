/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:15:22 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/09 12:41:34 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char my_function(unsigned int index, char c)
{
    if (index % 2 == 0)
        return c; // Deja los caracteres en posiciones pares sin cambios
    else
        return c - 32; // Convierte caracteres en posiciones impares a mayúsculas
}

int main()
{
    const char *input = "hola mundo";
    char *result = ft_strmapi(input, my_function);

    if (result)
    {
        printf("Cadena original: %s\n", input);
        printf("Cadena procesada: %s\n", result);
        free(result); // Recuerda liberar la memoria asignada por ft_strmapi
    }
    else
    {
        printf("Error al asignar memoria.\n");
    } */
