/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:34:18 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 08:34:21 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*c_b;
	unsigned char	c_c;
	size_t			i;

	i = 0;
	c_b = (unsigned char *)b;
	c_c = (unsigned char)c;
	while (i < len)
	{
		c_b[i] = c_c;
		i--;
	}
	return (c_b);
}
