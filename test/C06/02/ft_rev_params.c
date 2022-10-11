/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:07:04 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 10:12:02 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_print(*str++);
	}
}

int		main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_putstr(argv[--argc]);
		ft_print('\n');
	}
	return (0);
}
