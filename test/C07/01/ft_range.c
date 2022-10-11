/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-dey <avan-dey@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:47:44 by avan-dey          #+#    #+#             */
/*   Updated: 2021/02/25 13:58:37 by avan-dey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int d;
	int *p;

	if (min >= max)
		return (0);
	max -= min;
	p = malloc(max * sizeof(int));
	if (!p)
		return (0);
	d = -1;
	while (++d < max)
	{
		p[d] = min + d;
	}
	return (p);
}

//ex01
#include <stdio.h>
void     read_arr_int(int *arr, int size){
    int i = 0;
	printf("[");
    while(i < size- 1) {
        printf("%d, ", arr[i]);
        i++;
    } 
	printf("%d", arr[i]);
	printf("]");
}
int main () {
	int *bla;
	bla = ft_range(8, 50);
	read_arr_int(bla, 42);
	return 0;
}