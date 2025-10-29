/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:58:27 by addias            #+#    #+#             */
/*   Updated: 2025/10/29 16:58:29 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	c;
	char	*str;

	i = 0;
	c = 0;
	str = malloc(sizeof(char) * (strlen(s) + 1));
	if (!str)
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			str[c] = f(i, s[i]);
			c++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
