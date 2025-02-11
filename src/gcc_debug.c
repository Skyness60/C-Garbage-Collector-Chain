/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcc_debug.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:11:46 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:17:48 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/garbage_collector_chain.h"

void	debug_gcc(t_garb_c *trash)
{
	t_node	*current;
	size_t	i;

	current = trash->head;
	i = 0;
	if (trash == NULL)
		return ;
	printf("=== Garbage Collector Stats ===\n");
	printf("Nombre de pointeurs : %zu\n", trash->count);
	while (current)
	{
		printf("Pointer %zu: %p\n", i++, current->ptr);
		current = current->next;
	}
	printf("================================\n");
}
