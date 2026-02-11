/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:37:42 by esbilen           #+#    #+#             */
/*   Updated: 2026/02/11 19:27:42 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
	printf("%d ", ft_find_next_prime(2));
	printf("%d ", ft_find_next_prime(3));
	printf("%d ", ft_find_next_prime(53));
	printf("%d ", ft_find_next_prime(31));
	printf("%d ", ft_find_next_prime(43));
	printf("%d ", ft_find_next_prime(89));
	printf("%d ", ft_find_next_prime(0));
	printf("%d ", ft_find_next_prime(1));
	return (0);
}
