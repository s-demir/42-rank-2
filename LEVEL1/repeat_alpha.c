/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:25:59 by sedemir           #+#    #+#             */
/*   Updated: 2024/12/27 12:47:16 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int a = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				a = (argv[1][i] - 'a' + 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				a = argv[1][i] - 'A' + 1;
			else
				a = 1;
			while (a > 0)
			{
				write(1, &argv[1][i], 1);
				a--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}