/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:25:06 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/15 09:21:19 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	null_checker(const char *str, size_t len)
{
	if (len == 0)
		return (0);
	if (!str)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (null_checker(haystack, len))
	{
		while (haystack[i] && i < len)
		{
			j = 0;
			if (haystack[i] == needle[j])
			{
				while (haystack[i + j] == needle[j] && (i + j) < len)
					j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
			i++;
		}
	}
	return (NULL);
}
