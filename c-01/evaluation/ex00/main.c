/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:21:42 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/20 16:34:05 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ft.h"

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb == -2147483648)
	{
		ft_putnbr((nb - 8) / 10);
		nb = 8;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb_char = '0' + nb;
		write(1, &nb_char, 1);
	}
}

int	main(void)
{
	int	n;

	n = 2024;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_ft(&n);
	ft_putnbr(n);
	write(1, "\n", 1);
}
