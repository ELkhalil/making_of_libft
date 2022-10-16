/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:52:38 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/16 12:19:12 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*c_b;
	unsigned char	c_c;

	c_b = (unsigned char *)b;
	c_c = (unsigned char)c;
	while (len > 0)
	{
		c_b[len] = c_c;
		len--;
	}
	return (c_b);
}
