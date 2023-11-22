/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:16:02 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 10:16:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void snake_to_camel(char *snake)
{
    int i;

    i = -1;
    while (snake[++i])
    {
        if (snake[i] == '_')
        {
            i++;
            snake[i] = snake[i] - 32;
        }
        write(1, &snake[i], 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        snake_to_camel(av[1]);
    return (0);
}
