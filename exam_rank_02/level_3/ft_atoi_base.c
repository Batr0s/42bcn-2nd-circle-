/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:42:27 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 18:42:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**/
int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int j;
    int resta;
    int number;
    char *bases = "0123456789abcdef";

    i = 0;
    resta = 1;
    number = 0;
    if (str[0] == '-')
    {
        resta = -1;
        i++;
    }
    while (str[i])
    {
        j = 0;
        while (bases[j] != str[i] && bases[j] - 32 != str[i])
            j++;
        number = number*str_base + (j % str_base);
        i++;
    }
    return (resta*number);
}

int main(void)
{
    //FUNCIONA PARA BASES HASTA LA 10.
    printf("%d\n", ft_atoi_base("-12fdb3", 16));  //-1244595
    printf("%d\n", ft_atoi_base("9F", 16)); //159
    printf("%d\n", ft_atoi_base("-10101101", 2)); //173
    printf("%d\n", ft_atoi_base("-2147483648", 10));
}
