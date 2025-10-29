/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:52 by addias            #+#    #+#             */
/*   Updated: 2025/10/29 15:56:32 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(int argc, char **argv)
// {
//     if(argc == 3)
//     {
//         char *s = argv[1];
//         int fd = ft_atoi(argv[2]);

//         ft_putendl_fd(s, fd);
//     }
// }
