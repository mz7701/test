/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changkim <changkim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:46:41 by changkim          #+#    #+#             */
/*   Updated: 2021/09/11 17:46:45 by changkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_width(int x)
{
	int	width;

	width = 0;
	while (width < x)
	{
		if (width == 0)
			ft_putchar('A');
		else if (width == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		width++;
	}
	ft_putchar('\n');
}

void	print_width2(int x)
{
	int	width;

	width = 0;
	while (width < x)
	{
		if (width == 0)
			ft_putchar('C');
		else if (width == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		width++;
	}
	ft_putchar('\n');
}

void	print_width_mid(int x)
{
	int	width;

	width = 0;
	while (width < x)
	{
		if (width == 0)
			ft_putchar('B');
		else if (width == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		width++;
	}
	ft_putchar('\n');
}

void	print_height(int x, int y)
{
	int	height;

	height = 0;
	while (height < y)
	{
		if (height == 0)
			print_width(x);
		else if (height == y - 1)
			print_width2(x);
		else
			print_width_mid(x);
		height++;
	}
}

void	rush(int x, int y)
{
	if ((x > 0 && x <= 2147483647) && (y > 0 && y <= 2147483647))
		print_height(x, y);
	else if (x < 0 || y < 0)
		write(1, "ERROR\n", 7);
}
