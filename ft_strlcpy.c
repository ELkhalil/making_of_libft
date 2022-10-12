/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:58:01 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/11 11:57:12 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;

	src_length = ft_strlen(src);
	if (dstsize > 0)
	{	
		while (*src && --dstsize)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (src_length);
}
