/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:44:03 by addias            #+#    #+#             */
/*   Updated: 2025/10/29 13:57:18 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a;
	size_t	j;
	size_t	sep;
	size_t	palavras;
	char	**str;
	size_t	inicio;

	i = 0;
	a = 0;
	j = 0;
	sep = 0;
	while (s[i])
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	palavras = sep + 1;
	str = malloc(sizeof(char *) * (palavras + 1));
	if (!str)
		return (NULL);
	i = 0;
	inicio = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			str[a] = malloc(j + 1);
			if (!str)
				return (NULL);
			ft_strlcpy(str[a], &s[inicio], j + 1);
			a++;
			j = 0;
			inicio = i + 1;
		}
		else
			j++;
		i++;
	}
	str[a] = malloc(j + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str[a], &s[inicio], j + 1);
	a++;
	str[a] = NULL;
	return (str);
}

// int main(int argc , char **argv)
// {
// 	if(argc == 3)
// 	{
// 		char **result = ft_split(argv[1], argv[2][0]);

// 		for(int i = 0; result[i] != NULL; i++)
// 			printf("%s\n", result[i]);
// 	}
// }
