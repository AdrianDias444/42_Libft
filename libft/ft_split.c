/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:44:03 by addias            #+#    #+#             */
/*   Updated: 2025/10/30 17:20:58 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t i;
	size_t sep;

	i = 0;
	sep = 0;
	while(s[i])
	{
		if(s[i] != c)
			sep++;
		i++;
	}
	return (sep);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t words;

	i = 0;
	j = ft_strlen(s);
	words = 1;
	while(s[i] && i <= j)
	{
		if(s[i] == c)
			words++;
		while(s[i] == c && i < j)
			i++;
		i++;
	}
	if(s[0] == c)
		words--;
	if(s[ft_strlen(s) - 1] == c)
		words--;
	return(words);
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a;
	size_t	j;
	size_t	start;
	char	**str;

	i = 0;
	a = 0;

	str = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;

			j = 0;
			str[a] = malloc(j + 1);
			if (!str)
				return (NULL);
			ft_strlcpy(str[a], &s[i], j + 1);

		}
	}
	str[a] = NULL;
	return (str);
}

int main(/*int argc , char **argv*/)
{

	char const *s = "    Hell oawo rld ";
	char c = ' ';
	char **result = ft_split(s, c);

	for(int i = 0; result[i] != NULL; i++)
		printf("%s\n", result[i]);

	// printf("%zu", ft_count_words(s, c));
}
