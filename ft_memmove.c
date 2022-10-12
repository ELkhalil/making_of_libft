/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:50:06 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/12 12:47:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *c_dst;
	unsigned char *c_src;

	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	c_src += len;
	c_dst += len;
	while (len--)
		*c_dst-- = *c_src--;
	return (dst);
}