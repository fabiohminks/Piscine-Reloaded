/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:31:54 by fminks-g          #+#    #+#             */
/*   Updated: 2026/04/08 12:58:17 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
    return (0);
}*/
