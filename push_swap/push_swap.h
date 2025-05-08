/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:51:42 by ncampo            #+#    #+#             */
/*   Updated: 2025/05/08 23:51:44 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"

# define MAX 2147483647
# define MIN -2147483648

typedef struct s_data
{
	int		*sa;
	int		*sb;
	int		sizea;
	int		sizeb;

}	t_data;

//swap.c//
void	swap(int *stack);
void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);
void	swap_int(int *a, int *b);

//push.c//
void	pa(t_data *data);
void	pb(t_data *data);

//rotate.c//
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);

//reverse.c//
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

//numbers.c//

int		numbers_mason(const char *str);
int		duplikate(t_data *data, int num, int j);
int		check_nums(t_data *data);

//parse.c//

void	parse_args(t_data *data, int argc, char *argv[]);
void	free_split(char **split);
int		count_numbers(int argc, char *argv[]);
void	parse_split(t_data *data, char **split);

//sorter.c//

void	choose_sort(t_data *data);
void	sort_two(t_data *data);
void	sort_three(t_data *data);
int		n_chunks(int size);

//sort_five.c//

int		find_min(t_data *data);
void	push_min(t_data *data);
void	sort_five(t_data *data);

//algoritmo.c//

int		find_max(t_data *data);
void	push_biggest(t_data *data);
void	chunk_sort(t_data *data);
void	array_order(int *arr, int size);
void	replace_index(t_data *data, int *sorted);

//utils.c//

void	free_for_all(t_data *data, int error);
void	index_value(t_data *data);
void	copy_array(int *dest, int *src, int size);
int		is_sorted(t_data *data);
void	push_chunk(t_data *data, int limit, int size, int *pushed);

#endif
