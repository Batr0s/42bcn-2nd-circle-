/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:11:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/24 17:11:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_isprime(int num)
{
    while ((i * i <= prime) && (prime % i != 0))
        i++;
    if (i * i > prime || prime % i != 0)
        // prime es primo
}

int main(int ac, char **av)
{
    int numb;
    int prime;
    int total;

    if (ac == 2)
    {
        numb = atoi(av[1]);
        prime = numb;
        while (total < numb)
        {
            i = 1;
            
            prime = i;
        }
    }
    else
        printf("\n");
    return (0);
}
