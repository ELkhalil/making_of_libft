/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:06:30 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/13 22:22:38 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *created_str;
    int     i;

    i = 0;
    created_str = malloc(ft_strlen(s) + 1);
    if (!created_str)
        return (NULL);
    while (s[i])
    {
        created_str[i] = f(i,s[i]);
        i++;
    }
    return (created_str);
}
