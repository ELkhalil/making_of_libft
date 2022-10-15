/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:56:43 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/15 09:27:01 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*recall;

	recall = dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (recall);
}
