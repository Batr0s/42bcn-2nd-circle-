/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:45:58 by marvin            #+#    #+#             */
/*   Updated: 2023/11/24 12:45:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void ft_replace(char **tab, t_point size, t_point begin, char c)
{
	int col;
	int fil;

	col = begin.x-1;
	fil = begin.y-1;
	tab[fil][col] = 'F';
	if ((begin.y < size.y) && (c == tab[fil+1][col]))
		ft_replace(tab, size, (t_point){begin.x, begin.y + 1}, c);
	if ((begin.y > 1) && (c == tab[fil-1][col]))
		ft_replace(tab, size, (t_point){begin.x, begin.y - 1}, c);
	if ((begin.x < size.x) && (c == tab[fil][col+1]))
		ft_replace(tab, size, (t_point){begin.x + 1, begin.y}, c);
	if ((begin.x > 1) && (c == tab[fil][col-1]))
		ft_replace(tab, size, (t_point){begin.x - 1, begin.y}, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c;
	int col;
	int fil;
	t_point newbeg;

	newbeg = begin;
	col = begin.x-1;
	fil = begin.y-1;
	c = tab[fil][col];
	ft_replace(tab, size, (t_point){begin.x-1, begin.y}, c);
}


/*
#include <stdlib.h>
#include <stdio.h>
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	// {columnas (x) , filas (y)}
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {2, 2};
	flood_fill(area, size, begin);;
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
*/