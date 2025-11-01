/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:02:21 by addias            #+#    #+#             */
/*   Updated: 2025/11/01 12:02:22 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *lista = NULL;  // Lista vazia
//     t_list *novo1, *novo2;
//     int a = 10, b = 20;

//     // Criar primeiro nó
//     novo1 = malloc(sizeof(t_list));
//     novo1->content = &a;
//     novo1->next = NULL;

//     // Adicionar na frente (lista vazia)
//     ft_lstadd_front(&lista, novo1);
//     printf("====== Antes da insercao ======\n");
//     printf("Primeiro: %d\n", *(int *)lista->content);  // Deve imprimir 10

//     printf("\n====== Depois da Insercao ======");
//     // Criar segundo nó
//     novo2 = malloc(sizeof(t_list));
//     novo2->content = &b;
//     novo2->next = NULL;

//     // Adicionar na frente (já tem elementos)
//     ft_lstadd_front(&lista, novo2);
//     printf("\nPrimeiro: %d\n", *(int *)lista->content);  // Deve imprimir 20
//     printf("Segundo: %d\n", *(int *)lista->next->content);
// Deve imprimir 10

// }
