/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector_chain.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:55:47 by sperron           #+#    #+#             */
/*   Updated: 2025/02/11 13:17:45 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_CHAIN_H
# define GARBAGE_COLLECTOR_CHAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_node
{
    void *ptr;
    struct s_node *next;
} t_node;

typedef struct s_garb_c
{
    t_node *head;
    t_node *tail;
    size_t count;
    bool verbose;
}	t_garb_c;

void	remove_ptr(t_garb_c *trash, void *ptr);
void	add_ptr(t_garb_c *trash, void *ptr);
void	add_ptr_tab(t_garb_c *trash, void **ptr_tab, int arr_len, \
bool is_malloced);
bool	is_ptr_in_trash(t_garb_c *trash, void *ptr);
void	free_all(t_garb_c *trash);
void	init_garbage_collector_chain(t_garb_c *trash);
void	debug_gcc(t_garb_c *trash);

#endif //GARBAGE_COLLECTOR_CHAIN_H