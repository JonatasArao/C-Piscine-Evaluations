/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:51:36 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 09:32:11 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strlen.h"

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
	char	str[8];

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	str[7] = '\0';
	ft_putnbr(ft_strlen(str));
}
