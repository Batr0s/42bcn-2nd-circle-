/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:03:25 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 20:03:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_len(int start, int end)
{
    int len;
    
    if (end < start)
        len = (start - end) + 1;
    else if (end > start)
        len = (end - start) + 1;
    else
        len = 1;
    return (len);
}

int *ft_create(int start, int end, int *group, int len)
{
    int i;

    i = 0;
    if (start <= end)
    {
        while (start <= end)
        {
            group[i] = start;
            start++;
            i++;
        }
        return (group);
    }
    else
    {
        while (start >= end)
        {
            group[i] = start;
            start--;
            i++;
        }
        return (group);
    }  
}

int     *ft_range(int start, int end)
{
    int *group;
    int len;
    
    len = ft_len(start, end);
    group = malloc((sizeof(int))*(len));
    return(ft_create(start, end, group, len));
}

int main(void)
{
    int start = -1;
    int end = 2;

    ft_range(start, end);
}
