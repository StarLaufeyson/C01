/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:01:13 by eluno-la          #+#    #+#             */
/*   Updated: 2023/03/08 16:18:03 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

/*int	main(void)
{
	int	a = 26;
	int	b = 13;

	printf("%i/", a);
	printf("%i\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("div *a = %i\n", a);
	printf("mod *b = %i\n", b);
	return (0);
}*/
