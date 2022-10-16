/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:19:09 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/16 13:41:08 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_count(char const *s, char c)
{
	int	i;
	int	wd_c;

	i = 0;
	wd_c = 0;
	while (s[i]) 
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			wd_c++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wd_c);
}

int copy_wd(char c, char const  *str, int len)
{
	int coun = 0;
	while (str[len] != c)
	{
		len++;
		coun ++;
	}
	return(coun);
}
char	**ft_split(char const *s, char c)
{
	char	**splited_strs;
	int		i;
	int		j;
	int		sub_len;
	int		m;

	i = 0;
	j = 0;
	sub_len = 0;
	m = 0;
	splited_strs = malloc(sizeof(char *) * wd_count(s, c) + 1);
	if (!splited_strs)
		return(NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			splited_strs[j] = malloc(copy_wd(c, s,i));
			while (s[i] != c)
			{
				splited_strs[j][m] = s[i];
				i ++;
				m ++;
			}
			splited_strs[j][m] = 0;
			m = 0;
			j++;
		}
	}
	splited_strs[j] = NULL;
	return(splited_strs);
}

#include <stdio.h>

int main(int ac, char **av)
{
	(void )ac;
	int count = wd_count(av[1],av[2][0]);
	char **lol = ft_split(av[1],av[2][0]);
	for (int i = 0; i < count; i++)
		puts(lol[i]);
	return (0);
}
