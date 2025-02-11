/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcc_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:03:56 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:12:44 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/garbage_collector_chain.h"

void	add_ptr(t_garb_c *trash, void *ptr)
{
	t_node	*new;

	if (!ptr || is_ptr_in_trash(trash, ptr))
		return ;
	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->ptr = ptr;
	new->next = NULL;
	if (trash->tail)
		trash->tail->next = new;
	else
		trash->head = new;
	trash->tail = new;
	trash->count++;
	if (trash->verbose)
		printf("Pointer added to garbage collector chain\n");
}

void	add_ptr_tab(t_garb_c *trash, void **ptr_tab, int arr_len, \
bool is_malloced)
{
	int	i;

	i = 0;
	while (i < arr_len)
		add_ptr(trash, ptr_tab[i++]);
	if (is_malloced)
		add_ptr(trash, ptr_tab);
}
