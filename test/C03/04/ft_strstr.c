/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:44:12 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/23 14:24:47 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int p;

	if (!*to_find)
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			p = 1;
			while (to_find[p] && str[p] == to_find[p])
			{
				p++;
			}
			if (!to_find[p])
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
