/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:54:55 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 11:54:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int check_rep1(int i, char *s1)
{
    int j;
    int repeat;
   
    j = i;
    while (i != 0 && j-- > 0)
    {
        if (s1[j] == s1[i])
            return (0);
    }
    return (1);
}

#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int repeat;

    i = 0;
    repeat = 1;
    if (ac == 3)
    {
        while (av[1][i])
        {
            repeat = check_rep1(i, av[1]);
            j = 0;
            while (av[2][j] && repeat)
            {
                if (av[1][i] == av[2][j])
                {
                    write(1, &av[2][j], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
