/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:50:06 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 09:14:52 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;

	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (c_dst > c_src)
	{
		while (len > 0)
		{
			c_dst[len] = c_src[len];
			len--;
		}	
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
