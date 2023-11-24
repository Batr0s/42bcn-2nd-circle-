/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:54:46 by marvin            #+#    #+#             */
/*   Updated: 2023/11/24 10:54:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_free(char **split, int wd)
{
    while(wd != 0)
    {
        free(split[wd]);
        wd--;
    }
    free(split);
    return (NULL);
}

int ft_countwd(char *st)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (st[i])
    {
        while (st[i] && st[i] == 32 || (st[i] >= 9 && st[i] <= 13))
            i++;
        if (st[i])
            words++;
        while (st[i] && st[i] != 32 && (st[i] <= 9 || st [i] >= 13))
            i++;
    }
    return (words);
}

char *ft_create_word(char *st, int i)
{
    int j;
    int k;
    char *word;

    j = 0;
    while (st[i+j] != 32 && st[i+j] != 0 && (st[i+j] <= 9 || st [i+j] >= 13))
        j++;
    word = malloc(sizeof(char) * j + 1);
    if (word == NULL)
        return NULL;
    word[j] = '\0';
    k = 0;
    while (k < j)
    {
        word[k] = st[i+k];
        k++;
    }
    return (word);
}

char **ft_create_ptrs(char **split, char *st)
{
    int i;
    int wd;

    wd = 0;
    i = 0;
    while (st[i])
    {
        while (st[i] && st[i] == 32 || (st[i] >= 9 && st[i] <= 13))
            i++;
        if (st[i])
        {
            split[wd] = ft_create_word(st, i);
            if (split[wd] == NULL)
                return (ft_free(split, wd));
            wd++;
        }
        while (st[i] && (st[i] != 32 || (st[i] <= 9 && st[i] >= 13)))
            i++;
    }
    return (split);
}

char **ft_split(char *str)
{
    int words;
    char **split;

    if (str == NULL)
        return (NULL);
    words = ft_countwd(str);
    split = malloc(sizeof(char *) * (words + 1));
    if (split == NULL)
        return (NULL);
    split[words] = '\0';
    split = ft_create_ptrs(split, str);
}

int main(void)
{
    char *str = "a hola que tal estas. compi l";
    char **split;
    int i;

    i = 0;
    split = ft_split(str);
    while(split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
    return (0);
}
