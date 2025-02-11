/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcc_remove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:10:41 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:15:34 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/garbage_collector_chain.h"

void	remove_ptr(t_garb_c *trash, void *ptr)
{
	t_node	*current;
	t_node	*prev;

	prev = NULL;
	current = trash->head;
	while (current)
	{
		if (current->ptr == ptr)
		{
			if (prev)
				prev->next = current->next;
			else
				trash->head = current->next;
			if (current == trash->tail)
				trash->tail = prev;
			free(current->ptr);
			free(current);
			trash->count--;
			return ;
		}
		prev = current;
		current = current->next;
	}
}
