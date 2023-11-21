/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:54:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 12:54:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void rot_13(char *str)
{
    int i;
    char c;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = (str[i] - 'a' + 13) % 26 + 'a';
            write(1, &c, 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = (str[i] - 'A' + 13) % 26 + 'A';
            write(1, &c, 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    write(1, "\n", 1);
}