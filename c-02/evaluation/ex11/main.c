/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 16:52:35 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putstr_non_printable.h"

int	main(void)
{
	char	str[0xFF + 10];
	int		index;

	index = 1;
	while (index <= 0xFF)
	{
		str[index - 1] = index;
		index = index + 1;
	}
	str[index - 1] = 0;

	ft_putstr_non_printable("Oi\nvoce esta bem?");
	write(1, "\n", 1);
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}
