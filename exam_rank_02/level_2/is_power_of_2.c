/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:41:55 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 13:41:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
    while (n %2== 0) 
        n /= 2;
    if (n == 1)
        return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void){
    int n = 7;
    printf("%d\n", is_power_of_2(16));
    printf("%d\n", is_power_of_2(32));
    printf("%d\n", is_power_of_2(432));
    printf("%d\n", is_power_of_2(500));
}
*/