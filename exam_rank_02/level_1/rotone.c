/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:22:06 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 13:22:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] -'a' + 1) % 26 + 'a';
        else if (str[i] >= 'A' && str[i] <= 'z')
            str[i] = (str[i] -'A' + 1) % 26 + 'A';
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
}