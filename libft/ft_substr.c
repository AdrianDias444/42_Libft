/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:05:57 by addias            #+#    #+#             */
/*   Updated: 2025/10/26 17:04:51 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < (len - 1))
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int main(int argc, char **argv)
// {
// 	if(argc == 4)
// 	{
// 		char const *s = argv[1];
// 		unsigned int start = (unsigned int)ft_atoi(argv[2]);
// s1		size_t len = (size_t)ft_atoi(argv[3]);

// 		printf("%s", ft_substr(s, start, len));

// 	}
// }
