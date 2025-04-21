/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sedemir <sedemir@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:40:05 by sedemir           #+#    #+#             */
/*   Updated: 2025/01/09 14:32:20 by sedemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_number(int a)
{
	if (a >= 10)
		write_number(a / 10);
	write(1, &"0123456789"[a % 10], 1);
}
int main()
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (a % 3 == 0)
			write(1, "fizz", 4);
		else if (a % 5 == 0)
			write(1, "buzz", 4);
		else
			write_number(a);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}