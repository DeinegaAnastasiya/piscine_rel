/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:44:27 by poatmeal          #+#    #+#             */
/*   Updated: 2019/09/08 16:42:01 by poatmeal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	buf[BUF_SIZE + 1];

	b = 0;
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
	else
	{
		a = open(argv[1], O_RDONLY);
		if (a)
		{
			while ((b = read(a, buf, 1)))
				write(1, &buf, 1);
			buf[b] = '\0';
			close(a);
		}
	}
	return (0);
}
