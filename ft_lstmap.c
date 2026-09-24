/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:34:37 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/24 17:34:39 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newnode;
    t_list  *list;
    void    *fnew;


    while (lst)
    {
        newnode = ft_lstnew(lst->content);

        if (!newnode)
        {
            ft_lstdelone(newnode, del);
            free(newnode);
            return (NULL);
        }

        fnew = f(lst->content);
        newnode->content = fnew;
        list = ft_lstnew(newnode->content);

        lst = lst -> next;
    }
    return (list);
}
