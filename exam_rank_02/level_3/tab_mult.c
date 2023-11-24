/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:01:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/23 18:01:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % 1000000000 * -1);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

/*
#include <unistd.h>

int ft_atoi(char *str)
{
    int num;
    int i;

    i = 0;
    num = 0;
    while (str[i])
    {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    return (num);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num/10);
    ft_putchar(num % 10 + 48);
}

#include <stdio.h>
int	main(int ac, char **av)
{
    int num;
    int i;

    i = 1;
    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
    }
    else
        write(1, "\n", 1);
	return (0);
}
*/