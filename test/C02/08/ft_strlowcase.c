/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:52:48 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/18 10:54:54 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *p;

	p = str;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
			*p += 32;
		p++;
	}
	return (str);
}
