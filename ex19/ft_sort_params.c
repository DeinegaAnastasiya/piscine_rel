/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:59:00 by poatmeal          #+#    #+#             */
/*   Updated: 2019/09/06 16:22:28 by poatmeal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(char **v)
{
	int i;
	int j;

	i = 1;
	while (v[i] != '\0')
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			ft_putchar(v[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*a;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				a = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = a;
				i = 0;
			}
			i++;
		}
	}
	ft_print_params(argv);
	return (0);
}
