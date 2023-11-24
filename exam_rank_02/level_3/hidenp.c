/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:21:30 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 12:21:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int hidenp(char *s1, char *s2)
{
    int i;
    int j;

    if (s1[0] == 0)
        return (1);
    i = 0;
    j = 0;
    while (s1[i])
    {
        while (s2[j] && s2[j] != s1[i])
            j++;
        if (s1[i] != s2[j])
            write(1, "0", 1);
        i++;
    }
    write(1, "1", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
        hidenp(av[1], av[2]);
    write(1, "\n",1);
    return (0);
}
