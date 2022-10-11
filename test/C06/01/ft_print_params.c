/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 09:23:10 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 10:14:35 by avan-dey         ###   ########.fr       */
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
	int p;

	p = 1;
	while (p < argc)
	{
		ft_putstr(argv[p++]);
		ft_print('\n');
	}
	return (0);
}
