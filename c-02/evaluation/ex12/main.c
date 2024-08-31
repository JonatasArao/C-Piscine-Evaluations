/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 16:52:49 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	str[0xFF + 10];
	int		index;

	index = 0;
	while (index <= 0xFF)
	{
		str[index] = index;
		index = index + 1;
	}
	str[index] = 0;

	index = 0;
	while (index < 30)
	{
		ft_print_memory((void *)str, index);
		index = index + 1;
	}

	ft_print_memory((void *)str, 0x101);
}
