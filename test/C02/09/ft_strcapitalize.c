/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:56:06 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/18 14:59:49 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alpha(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			if (ft_alpha(str[p - 1]) == 1)
				str[p] = str[p] - 32;
		}
		else if (str[p] >= 'A' && str[p] <= 'Z')
		{
			if (ft_alpha(str[p - 1]) == 0)
				str[p] = str[p] + 32;
		}
		p++;
	}
	return (str);
}
