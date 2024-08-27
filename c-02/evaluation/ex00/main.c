/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:29:16 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:02:34 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcpy.h"

int	main(void)
{
	char	str[7];
	char	str2[7];

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	printf("%s\n", str);
	ft_strcpy(str2, str);
	printf("%s\n", str2);
	return (0);
}
