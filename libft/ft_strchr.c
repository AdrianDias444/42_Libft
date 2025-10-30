/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:04:51 by addias            #+#    #+#             */
/*   Updated: 2025/10/30 15:59:00 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(s);
	i = 0;
	while (i <= len_s)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
// int main(int argc, char **argv)
// {
// 	const char *s = NULL;

// 	int c = argv[2][0];
// 	//printf("FT_STRCHR: %s", ft_strchr(s,  c));
// 	printf("\n   STRCHR: %s", strchr(s, c));
// }
