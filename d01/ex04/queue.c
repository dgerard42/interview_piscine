/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:58:02 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/25 22:58:05 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_queue	*queueInit(void)
{
	struct	s_queue *line;

	if(!(struct s_queue*)calloc(1, sizeof(s_queue)))
		line = NULL;
	else
	{
		queue->first = NULL;
		queue->last = NULL;
	}
	return (line);
}

char			*dequeue(struct s_queue *queue)
{
	char	*message;

	if (queue->first != NULL)
	{
		message = queue->firs
	}
}

void			enqueue(struct s_queue *queue, char *message)
{

}

char			*peek(struct s_queue *queue)
{

}

int				isEmpty(struct s_queue *queue)
{

}

Implement 5 functions for the following queue operations :
• queueInit() : Initialize the queue. The first and last pointers are set to NULL.
• enqueue(queue, message) : Add an message to the end of the queue. • dequeue(queue) : Remove the first item from the queue and return it.
If the queue is empty, the function returns NULL.
• peek(queue) : Return the first item of the queue.
If the queue is empty, the function returns NULL.
• isEmpty(queue) : Return 1 if the queue is empty, 0 otherwise.
