/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:56:43 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/11 02:22:50 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*recall;

	recall = dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (recall);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int src_arr[5] = {1,2,3,4,5};
	int des_arr[10];
	memcpy(des_arr, src_arr, sizeof(src_arr));
	printf("the size of the src arrayy is : %zu\n",sizeof(src_arr));
	printf("the size of a int is : %zu\n",sizeof(int));
	for (int i = 0; i<5; i++)
		printf("dest_array[%d] = %d\n",i,des_arr[i]);
	return (0);
}
*/
