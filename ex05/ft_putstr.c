/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:46:20 by eluno-la          #+#    #+#             */
/*   Updated: 2023/03/08 16:55:32 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	nombre[] = "mi nombre es Estrella";
	printf("%s\n", nombre);
}*/
