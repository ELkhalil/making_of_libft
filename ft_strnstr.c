/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:25:06 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/12 12:09:15 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	null_checker(const char *str, size_t len)
{
	if (len == 0)
		return (0);
	if (!*str)
		return (0);
	return (1);
}
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i_haystack;
	int	j_needle;

	i_haystack = 0;
	if (!*needle)
		return ((char *)haystack);
	if (null_checker(haystack, len))
	{
		
	}
	return (NULL);
}