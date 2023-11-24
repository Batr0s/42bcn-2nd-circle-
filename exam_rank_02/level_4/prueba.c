/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:28:24 by marvin            #+#    #+#             */
/*   Updated: 2023/11/24 18:28:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    int i;
    t_list *temp;

    i = 0;
    while (begin_list[0])
    {
        if (cmp(begin_list[0]->data, data_ref) == 0)
        {
            temp = begin_list[0]->next;
            free(begin_list[0]);
            begin_list[0] = temp;
        }
        else
            begin_list[0] = begin_list[0]->next;
    }
}  

void ft_list_remove_if2(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
} 

int ft_prueba (char *data, char *data_ref)
{
    int i;

    i = 0;
    if (data[i] == data_ref[i])
        return (0);
    return (1);
}

int main (void)
{
    t_list *lista1;
    lista1=malloc(sizeof(t_list));
    char *str1 = "a";

    t_list *lista2;
    lista2=malloc(sizeof(t_list));
    char *str2 = "b";

    t_list **begin_list;
    begin_list=malloc(sizeof(t_list *));

    char *data_ref = "b";
    
    lista1->data = str1;
    lista1->next = lista2;
    lista2->data = str2;
    lista2->next = NULL;
    *begin_list = lista1;
    printf("%s\n", lista1->next);
    ft_list_remove_if(begin_list, data_ref, ft_prueba);
    // ft_list_remove_if2(begin_list, data_ref, ft_prueba);
    printf("%s\n", lista1->next);
}
/*
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
} 
*/


