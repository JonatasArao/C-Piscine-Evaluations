/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:11:18 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/20 19:05:21 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_rev_int_tab.h"

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
	int	tab[8];
	int	index;

	tab[0] = 4;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 2;
	tab[4] = 8;
	tab[5] = 9;
	tab[6] = 2;
	tab[7] = 2;
	index = 0;
	while (index < 8)
	{
		ft_putnbr(tab[index]);
		index = index + 1;
	}
	write(1, "\n", 1);
	ft_rev_int_tab(tab, 8);
	index = 0;
	while (index < 8)
	{
		ft_putnbr(tab[index]);
		index = index + 1;
	}
}
