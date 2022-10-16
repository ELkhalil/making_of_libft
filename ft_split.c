/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:19:09 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/16 16:17:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_counter(char const *str, char c)
{
	int	i;
	int	num_wd;

	i = 0;
	num_wd = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			num_wd++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (num_wd);
}

char	**ft_split(char const *s, char c)
{
	char	**spl_strs;
	int		retu_count;
	int		wd_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	wd_len = 0;
	if (!s)
		return (NULL);
	retu_count = wd_counter(s, c);
	spl_strs = malloc(sizeof(char **) * retu_count);
	if (!spl_strs)
		return (NULL);
	spl_strs[retu_count] = NULL;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				wd_len++;
				i++;
			}
			spl_strs[j] = malloc(wd_len  + 1);
			ft_strlcpy(spl_strs[j], s + i - wd_len, wd_len + 1);
			wd_len = '\0';
			j++;
		}
	}
	return (spl_strs);
}
