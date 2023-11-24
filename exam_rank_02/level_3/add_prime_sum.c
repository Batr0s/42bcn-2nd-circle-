/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:49:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 12:49:35 by marvin           ###   ########.fr       */
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
        num = (num * 10) + (str[i++] - 48);
    return (num);
}

void print_number(int num)
{
    char c;

    if (num >= 10)
        print_number(num/10);
    c = (num % 10) + 48;
    write(1, &c, 1);
}

int ft_suma(int num)
{
    int i;
    int suma;

    suma = 0;
    while (num > 1)
    {
        i = 2;
        while ((i * i <= num) && (num % i != 0))
            i++;
        if (num % i != 0 || num == 2)
            suma += num;
        num--;
    }
    print_number(suma);
}

int main(int ac, char **av)
{
    int num;
    char cero;

    cero = '0';
    if (ac == 2 && (av[1][0] != '-'))
    {
        num = ft_atoi(av[1]);
        if (num > 1)
            ft_suma(num);
        else if (num == 1 || num == 0)
            print_number(0);
    }
    else
        write(1, &cero, 1);
    write(1, "\n", 1);
    return (0);
}
