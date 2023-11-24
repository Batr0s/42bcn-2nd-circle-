/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:03:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 15:03:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int num)
{
    char c;
    if (num >= 10)
        ft_putnbr(num/10);
    c = num%10 + 48;
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    
    if (ac > 1)
    {
        ft_putnbr(ac - 1);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}
