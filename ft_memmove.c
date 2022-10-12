/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:50:06 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/12 11:43:38 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;

	s = src;
	d = dst;
	s += len - 1;
	d += len - 1;
	while (len--)
	{
		*d = *s;
			s--;
			d--;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char csrc[100] = "ABCDEFGHIGKLMNOPK";
    printf("|A| |B| |C| |D| |E| |F|\n");
    //printf("%s\n\n", ft_memmove(csrc + 2, csrc, 5));
    printf("%s\n\n", ft_memmove(csrc + 2, csrc, 5));
    return 0;
}
*/