/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:18:18 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 11:18:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_create(int *group, int start, int end, int len)
{ 
    int i;
    int j;

    i = -1;
    j = 1;
    if (end > start)
        j = -1;
    while (++i < len)
    {
        group[i] = end;
        end += j;
    }
    return (group);
}

int     *ft_rrange(int start, int end)
{
    int *group;
    int len;

    if (start >= end)
        len = start - end + 1;
    else if (start <= end)
        len = end - start + 1;
    group = malloc((sizeof(int)) * len);
    if (group == NULL)
        return(NULL);
    return (ft_create(group, start, end, len));
}
