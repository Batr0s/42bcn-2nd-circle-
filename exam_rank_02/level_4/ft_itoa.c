/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:10:18 by marvin            #+#    #+#             */
/*   Updated: 2023/11/24 13:10:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_len(int num)
{
    int i;

    i = 0;
    if (num == 0)
        return (1);
    while (num > 0)
    {
        num /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int num)
{
    int len;
    int resta;
    char *result;

    if(num == -2147483648)
		return("-2147483648\0");
    resta = 0;
    if (num < 0)
    {
        resta = 1;
        num *= -1;
    }
    len = ft_len(num) + resta;
    result = malloc(len + 1);
    
    result[len] = '\0';
    if (resta)
        result[0] = '-';
    if (num == 0)
        result[0] = '0';
    while (num)
    {
        result[--len] = num%10+ 48;
        num /= 10;
    }
    return (result);
}

int main(void)
{
    int num = -2147483648;
    ft_itoa(num);
    printf("Itoa: %s", ft_itoa(num));
}
