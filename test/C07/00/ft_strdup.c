/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 10:29:35 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 11:45:15 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int p;

	p = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (ft_strcpy(dest, src));
}
