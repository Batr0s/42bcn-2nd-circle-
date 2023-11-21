/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:53:01 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 10:53:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *newstr;

    i = 0;
    while (src[i])
        i++;
    newstr = malloc(i + 1);
    if (newstr == NULL)
        return (NULL);
    i = -1;
    while (src[++i])
        newstr[i] = src[i];
    newstr[i] = '\0';
    return (newstr);
}
