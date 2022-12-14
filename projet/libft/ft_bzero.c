/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:36:34 by avan-dey          #+#    #+#             */
/*   Updated: 2021/05/28 16:35:46 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	p;

	p = 0;
	if (n != 0)
	{
		while (p < n)
		{
			((unsigned char *)s)[p] = 0;
			p++;
		}
	}
}
