/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:38:08 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 15:38:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    char *str = "abcdefghijklmnopqrstuvwxyz";

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = str[25 - (av[1][i] - 'a')];
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = str[25 - (av[1][i] - 'A')] - 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    return (0);
}
