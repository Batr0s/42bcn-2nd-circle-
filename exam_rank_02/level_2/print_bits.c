/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:00:19 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 16:00:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int divisor;
    char bit;
    int i;

    i = 0;
    divisor = 128;
    while (i < 8)
    {
        bit = ((octet / divisor) % 2) + 48;
        write(1, &bit, 1);
        divisor /= 2;
        i++;
    }
}


#include <stdio.h>
int main(void){
    int num = 173;
    printf("%d\n", (213/256)%2);
    printf("%d\n", (213/128)%2);
    printf("%d\n", (213/64)%2);
    printf("%d\n", (213/32)%2);
    printf("%d\n", (213/16)%2);
    printf("%d\n", (213/8)%2);
    printf("%d\n", (213/4)%2);
    printf("%d\n", (213/2)%2);
    printf("%d\n", (213/1)%2);
    print_bits(num);
}
