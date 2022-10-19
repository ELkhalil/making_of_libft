/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:19:09 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/19 23:22:01 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memory_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free (strs);
}

static int	wd_lener(char const *str, char c)
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

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	wd_len = 0;
	retu_count = wd_lener(s, c);
	spl_strs = malloc(sizeof(char *) * (retu_count + 1));
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
			spl_strs[j] = ft_substr(s, i - wd_len, wd_len);
			if (!spl_strs[j])
			{
				memory_free(spl_strs);
				return (NULL);
			}
			wd_len = 0;
			j++;
		}
	}
	return (spl_strs);
}
