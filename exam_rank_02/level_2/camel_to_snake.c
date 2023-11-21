/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:54:06 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 15:54:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int count_upper(char *str)
{
    int i;
    int uppercase;

    i = 0;
    uppercase = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            uppercase++;
        i++;
    }
    return (i + uppercase);
}

char *transform(char *arg, char *str_snake)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(arg[i])
    {
        if (arg[i] >= 'A' && arg[i] <= 'Z')
        {
            str_snake[i + j] = '_';
            j++;
            str_snake[i + j] = arg[i] + 32;
        }
        else
            str_snake[i + j] = arg[i];
        i++;
    }
    str_snake[i + j] = '\0';
    return (str_snake);
}

int main(int ac, char **av)
{
    int strlen;
    char *str_snake;
    int i;

    strlen = count_upper(av[1]);
    str_snake = malloc(strlen + 1);
    if (str_snake == NULL)
        return (0);
    str_snake = transform(av[1], str_snake);
    i = 0;
    while (str_snake[i])
    {
        write(1, &str_snake[i], 1);
        i++;
    }
}
