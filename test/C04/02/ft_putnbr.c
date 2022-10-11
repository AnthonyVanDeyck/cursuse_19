/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:35:11 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/23 15:58:27 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nn;

	if (nb < 0)
	{
		ft_print('-');
		nn = -nb;
	}
	else
		nn = nb;
	if (nn > 9)
	{
		ft_putnbr(nn / 10);
		nn %= 10;
	}
	ft_print(nn + '0');
}
