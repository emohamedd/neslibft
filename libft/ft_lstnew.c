/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:13:38 by emohamed          #+#    #+#             */
/*   Updated: 2022/12/04 15:46:11 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
t_list	*ft_lstnew(void *content)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if(!new)
        return NULL;
    new -> content = content;
    new -> next = NULL;
    return new;
}

// int main()
// {
//     int c = 5;
//     t_list *node;
//     node = ft_lstnew(&c);
//     printf("%d", *(int *)node -> content);

// }