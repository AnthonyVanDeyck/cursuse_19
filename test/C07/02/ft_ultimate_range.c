/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:17:28 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 14:43:34 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int p;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	p = -1;
	while (++p < max)
		(*range)[p] = min + p;
	return(p);
}

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min = 4;
    int max = 16;
    int **range;
    int *range1;

    range1 = &min;
    range = &range1;
    printf("Expected: |4,5,6,7,8,9,10,11,12,13,14,15,|\n");
    int len = ft_ultimate_range(range, min, max);
    printf("Actual  : |");
    int i = -1;
    while (++i < max - min)
        printf("%i,", range[0][i]);
    printf("|\n");

    printf("Length: %i (expected 12)\n", len);

    return (0);
}