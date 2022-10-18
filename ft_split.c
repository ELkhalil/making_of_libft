/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:19:09 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 22:57:44 by aelkhali         ###   ########.fr       */
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

static void	memory_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
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
	retu_count = 0;
	spl_strs = malloc(sizeof(char *) * retu_count + 1);
	if (!spl_strs)
		return (NULL);
	spl_strs[retu_count + 1] = NULL;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (s[i] != c)
			{
				i ++;
				continue;
			}
			spl_strs[j] = malloc(wd_len + 1);
			if (!spl_strs[j])
			{
				memory_free(spl_strs);
				return (NULL);
			}
			ft_strlcpy(spl_strs[j], s + i - wd_len, wd_len + 1);
			wd_len = 0;
			j++;
		}
	}
	spl_strs[j] = NULL;
	return (spl_strs);                                                                                                                                                                                                                                                      
}
// int main (void)
// {
// 	char *str = "    kkfjdglklksjdff fghjs sjhfg d skjdf  ";
// 	char **splited;
// 	int	i;

// 	i = 0;
// 	splited = ft_split(str, ' ');
// 	for (i = 0; i <= wd_counter(str,' '); i++)
// 		printf("|%s|\n",splited[i]);
// 	return (0);
// }