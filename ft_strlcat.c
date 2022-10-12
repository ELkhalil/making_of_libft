/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:02:02 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/11 02:26:32 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	length_dst;
	size_t	length_src;
	size_t	append_limit;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (dstsize <= length_dst)
		return (length_src + dstsize);
	append_limit = dstsize - length_dst - 1;
	dst += length_dst;
	while (*src && append_limit--)
		*dst++ = *src++;
	*dst = '\0';
	return (length_dst + length_src);
}
