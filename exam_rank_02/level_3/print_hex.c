/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:17:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 16:17:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;
    while (str[i])
    {
        num = num * 10 + str[i]-48;
        i++;
    }
    return (num);
}

void print_hex(int num)
{
    char *hexa;

    hexa = "0123456789abcdef";
    if (num >= 16)
        print_hex(num/16);
    write(1, &hexa[num%16], 1);
}

int main(int ac, char **av)
{
    int num;

    if (ac == 2 )
    {
        num = ft_atoi(av[1]);
        print_hex(num);
    }
    write(1, "\n", 1);
    return (0);
}
