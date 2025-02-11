/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcc_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:08:50 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:13:34 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/garbage_collector_chain.h"

bool	is_ptr_in_trash(t_garb_c *trash, void *ptr)
{
	t_node	*current;

	current = trash->head;
	while (current)
	{
		if (current->ptr == ptr)
			return (true);
		current = current->next;
	}
	return (false);
}
