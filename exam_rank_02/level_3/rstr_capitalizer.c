/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:08:59 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 17:08:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_lowcase(char *str)
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

    str = ft_lowcase(str);
    i = 0;
    while (str[i] == 32 || str[i] == '\t')
        i++;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') 
            && (str[i+1] == 32 || str[i+1] == '\t' || str[i+1] == '\0'))
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
        while(av[i])
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
