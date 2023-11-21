/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:10:20 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 11:10:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    char pivot;
    int i;
    int j;

    i = 0;
    j = -1;
    while (str[i])
        i++;
    while (++j < --i)
    {
        pivot = str[j];
        str[j] = str[i];
        str[i] = pivot;
    }
    return (str);
}