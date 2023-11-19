/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acandela <acandela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:26:01 by acandela          #+#    #+#             */
/*   Updated: 2023/11/19 12:32:43 by acandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	salto;

	salto = '\n';
	i = 0;
	if (argc == 2)
	{
		while (argv[argc - 1][i] == ' ' || argv[argc - 1][i] == 9)
			i++;
		while (argv[argc - 1][i] != '\0' && argv[argc - 1][i] != ' '
                && argv[argc - 1][i] != 9)
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	}
	write(1, &salto, 1);
	return (0);
}
