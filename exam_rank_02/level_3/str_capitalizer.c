/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:31 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 17:25:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_tolower(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

void printstr(char *str)
{
    int i;

    str = ft_tolower(str);
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    write(1, &str[i], 1);
    i++;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') 
            && (str[i-1] == ' ' || str[i-1] == '\t'))
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            printstr(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}
