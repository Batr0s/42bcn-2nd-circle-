/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:11:09 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 15:11:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int num1;
    int num2;

    if (ac == 3)
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[2]);

        while (num1 != num2)
        {
            if (num1 < num2)
                num2 -= num1;
            else if (num2 < num1)
                num1 -= num2;
        }
        printf("%d", num1);
    }
    printf("\n");
    return (0);
}
