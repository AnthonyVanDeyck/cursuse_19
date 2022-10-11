/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:11:47 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 09:57:39 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	p = nb;
	while (--power)
		p *= nb;
	return (p);
}
