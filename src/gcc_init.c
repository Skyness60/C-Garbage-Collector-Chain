/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcc_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:02:09 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:03:33 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/garbage_collector_chain.h"

void	init_garbage_collector_chain(t_garb_c *trash)
{
	trash->head = NULL;
	trash->tail = NULL;
	trash->count = 0;
	trash->verbose = false;
	if (trash->verbose)
		printf("Garbage collector chain initialized\n");
}
