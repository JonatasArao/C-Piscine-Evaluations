/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:42:53 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 09:44:53 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_atoi_base(char *nbr, char *base);

int	main(void)
{
	int res;
	int expected;

	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-g", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
	res = ft_atoi_base(" \v7fffffff", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);
	res = ft_atoi_base(" \f-80000000", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res);
	res = ft_atoi_base("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXEFnoY$",
			"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);

	res = ft_atoi_base("-~~~~~~~~'~~~~~~'~'~~~'''''''~~'$", "'~");
	expected = -2143247366;
	printf("%d : %d (equals: %i)\n", expected, res, expected == res);
}
