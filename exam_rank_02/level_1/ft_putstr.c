/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:32 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 11:01:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}

/*
int main(void)
{
    char *str = "Hola, que tal.";
    
    ft_putstr(str);
    return (0);
}
*/