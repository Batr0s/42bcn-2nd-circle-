/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:35:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/22 17:35:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void expand(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        while ((str[i] == ' ' || str[i] == '\t') 
            && (str[i+1] == ' ' || str[i+1] == '\t'))
            i++;
        if (str[i] == ' ' || str[i] == '\t')
            write(1, "   ", 3);
        else if (str[i] != 0 && str[i] != ' ' && str[i] != '\t')
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        expand(av[1]);
    }
    ft_putchar('\n');
    return (0);
}
