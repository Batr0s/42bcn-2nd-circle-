/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:36:43 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 11:36:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checks1(char *str, char c, int i)
{  
    i--;
    while (i >= 0)
    {
        if (str[i] == c)
            return (0);
        i--;
    }
    return (1);
}

int checks2(char *s1, char *s2, char c, int j)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return (0);
        i++;
    }
    return (checks1(s2, s2[j], j));
}

void ft_union(char *s1, char *s2)
{
    int i;
    int j;
    int reps1;
    int reps2;

    i = 0;
    j = 0;
    while (s1[i])
    {
        reps1 = checks1(s1, s1[i], i);
        if (reps1)
            write(1, &s1[i], 1);
        i++;
    }
    while (s2[j])
    {
        reps2 = checks2(s1, s2, s2[j], j);
        if (reps2)
            write(1, &s2[j], 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}
