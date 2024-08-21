/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:43:35 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/20 16:47:14 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_ft.h"

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
	int	*n1;
	int	**n2;
	int	***n3;
	int	****n4;
	int	*****n5;
	int	******n6;
	int	*******n7;
	int	********n8;
	int	*********n9;

	n = 2024;
	n1 = &n;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_ultimate_ft(n9);
	ft_putnbr(n);
	write(1, "\n", 1);
}
