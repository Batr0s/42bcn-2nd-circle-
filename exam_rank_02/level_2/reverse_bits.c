/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:26:13 by marvin            #+#    #+#             */
/*   Updated: 2023/11/21 18:26:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char rev = 0;

    while (i < 8)
    {
        rev = rev*2 + (octet % 2);
        octet /= 2;
        i++;
    }
    return (rev);
}
