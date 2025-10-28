/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:05:57 by addias            #+#    #+#             */
/*   Updated: 2025/10/27 15:57:42 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
int	main(int argc, char **argv)
{
	char const		*s;
	unsigned int	start;
	size_t			len;

	if(argc == 4)
	{
		s = argv[1];
		start = (unsigned int)ft_atoi(argv[2]);
		len = (size_t)ft_atoi(argv[3]);
		printf("%s", ft_substr(s, start, len));
	}
}
*/
