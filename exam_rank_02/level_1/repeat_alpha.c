/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:28:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 11:28:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int j;
    
    while(str[i])
        {
            j = -1;
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                while (++j < str[i] - 'a' + 1)
                    write(1, &str[i],1);
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                while (++j < str[i] - 'A' + 1)
                    write(1, &str[i],1);
            }
            else
                write(1, &str[i], 1);
            i++;
        }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n",1);
    return (0);
}
