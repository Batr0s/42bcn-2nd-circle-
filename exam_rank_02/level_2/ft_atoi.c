/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:17:57 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 18:17:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int num;
    int i;
    int signo;

    i = 0;
    signo = 1;
    num = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
        signo = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && (str[i] <= 57 && str[i] >= 48))
    {
        num = (num*10) + (str[i] - 48);
        i++;
    }
    return(signo * num);
}

int main(void)
{
    char *num = "2147483647";
    printf("Mio:      %d\n", ft_atoi(num));
    printf("Original: %d", atoi(num));
}