/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 08:59:55 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 09:14:30 by avan-dey         ###   ########.fr       */
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
	if (argc)
	{
		ft_putstr(argv[0]);
		ft_print('\n');
	}
	return (0);
}
