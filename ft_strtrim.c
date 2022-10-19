/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:41:15 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/19 11:56:24 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_if_contains(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		len;
	int		i;
	int		j;
	int		str_i;

	i = 0;
	str_i = 0;
	len = 0;
	j = ft_strlen(s1) - 1;
	if (!*s1)
		return (ft_strdup(""));
	while (check_if_contains(set, s1[i]) && s1[i++])
		len++;
	while (check_if_contains(set, s1[j]) && j-- >= 0)
		len++;
	if (s1[i] == '\0' || j == 0)
		return (ft_strdup(""));
	trimmed_str = malloc (ft_strlen(s1) - len + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + i, ft_strlen(s1) - len + 1);
	return (trimmed_str);
}
