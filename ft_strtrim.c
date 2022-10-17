/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:41:15 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 22:43:03 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_if_contains(const char *set, char c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
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
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	index = 0;
	j = ft_strlen(s1) + 1;
	while (s1[i] && check_if_contains(set, s1[i]))
		i++;
	while (check_if_contains(set, s1[j]))
		j--;
	trimmed_str = malloc (j - i + 1);
	if (!trimmed_str)
		return (NULL);
	while (i <= j)
	{
		trimmed_str[index] = s1[i];
		i++;
		index++;
	}
	trimmed_str[index] = '\0';
	return (trimmed_str);
}
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char s1[] = "  \t \t \n   \n\n\n\t";
	printf("%s\n",ft_strtrim(s1," \n\t"));
	return (0);
}
