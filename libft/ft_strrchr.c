/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:27:25 by addias            #+#    #+#             */
/*   Updated: 2025/10/30 15:58:52 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s = NULL;

// 	int c = 'e';
// 	printf("FT_STRRCHR: %s\n", ft_strrchr(s, c));
// 	printf("   STRRCHR: %s", strrchr(s, c));
// }
