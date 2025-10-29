/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <addias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:37:51 by addias            #+#    #+#             */
/*   Updated: 2025/10/29 15:43:09 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
// int main(int argc, char **argv)
// {
//     if(argc == 3)
//     {
//         char *s = argv[1];
//         int fd = ft_atoi(argv[2]);
//         ft_putstr_fd(s, fd);

//     }
// }
