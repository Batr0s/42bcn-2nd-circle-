/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:32:27 by acandela          #+#    #+#             */
/*   Updated: 2023/11/19 13:26:20 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_printnumb(int num)
{
    char c;
    
    c = (num%10) + 48;
    if (num > 9)
        ft_printnumb(num/10); 
    write(1, &c, 1);
}

int main(void)
{
    int num;

    num = 1;
    while (num <= 100)
    {
        if ((num % 5 == 0) && (num % 3 == 0))
            write(1, "fizzbuzz", 8);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else
            ft_printnumb(num);
        num++;
        write(1, "\n", 1);
    }
    return (0);
}
