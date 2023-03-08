/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:28:08 by eluno-la          #+#    #+#             */
/*   Updated: 2023/03/08 16:19:51 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[] = "Happy Birthday Mr President";

	printf("%d\n", ft_strlen(str));
	return (0);
}*/
