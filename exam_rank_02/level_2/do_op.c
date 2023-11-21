/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:19:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 16:19:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int num1;
    int num2;
    char oper;

    if (ac == 4)
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[3]);
        oper = av[2][0];
        if (oper == '+')
            printf("%d", (num1 + num2));
        else if (oper == '-')
            printf("%d", (num1 - num2));
        else if (oper == '*')
            printf("%d", (num1 * num2));
        else if (oper == '/')
            printf("%d", (num1 / num2));
        else if (oper == '%')
            printf("%d", (num1 % num2));
    }
    printf("\n");
    return (0);
}

// 2147483647
// -2147483648