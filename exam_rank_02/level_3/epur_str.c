/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:07:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 17:07:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void epur_str(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        while ((str[i] == ' ' || str[i] == '\t') && (str[i+1] == ' ' || str[i+1] == 0 
        || str[i] == '\t'))
              i++;
        if (str[i] != 0)
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write(1, "\n", 1);
    return (0);
}
