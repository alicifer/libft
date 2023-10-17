/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicifer <alicifer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:57:44 by alicifer          #+#    #+#             */
/*   Updated: 2023/10/16 15:43:06 by alicifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/* 
void delete_int(void *data)
{
	free(data);
}
 */
/* int main()
{
	// Crear una lista enlazada con 3 nodos
	t_list *NuevaLista = NULL;
	
	// Nodo 1
	int *data1 = (int *)malloc(sizeof(int));
	*data1 = 10;
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	node1->content = data1;
	node1->next = NULL;
	NuevaLista = node1;

	// Nodo 2
	int *data2 = (int *)malloc(sizeof(int));
	*data2 = 20;
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	node2->content = data2;
	node2->next = NULL;
	node1->next = node2;

	// Nodo 3
	int *data3 = (int *)malloc(sizeof(int));
	*data3 = 30;
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	node3->content = data3;
	node3->next = NULL;
	node2->next = node3;

	// Imprimir la lista antes de eliminar el último nodo
	t_list *current = NuevaLista;
	while (current)
	{
		printf("%d -> ", *((int *)current->content));
		current = current->next;
	}
	printf("NULL\n");

	// Utilizar la función para borrar el último nodo
	t_list *prev = NULL;
	current = NuevaLista;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	if (prev)
	{
		prev->next = NULL;
		ft_lstdelone(current, delete_int);
	}

	// Imprimir la lista después de eliminar el último nodo
	current = NuevaLista;
	while (current)
	{
		printf("%d -> ", *((int *)current->content));
		current = current->next;
	}
	printf("NULL\n");

	// Liberar memoria de la lista restante
	current = NuevaLista;
	while (current)
	{
		t_list *temp = current;
		current = current->next;
		ft_lstdelone(temp, delete_int);
	}

	return 0;
} */