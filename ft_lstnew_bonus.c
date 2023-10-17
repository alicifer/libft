/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:15:13 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/16 10:58:41 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* int main ()
{
	char *a = "Hola, mundo";
	t_list *newNode =ft_lstnew_bonus(a);
	if(newNode != NULL)
	{
		printf("nodo creado. Content: %s\n", (char *)newNode->content);
	} else {
		printf("Error al crear el nodo.\n");
	}
	free(newNode);
	return 0;
} */