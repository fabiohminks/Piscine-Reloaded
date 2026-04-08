/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:31:55 by fminks-g          #+#    #+#             */
/*   Updated: 2026/04/08 13:00:06 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}

/*
int main(void)
{
    ft_print_alphabet();
    return (0);
}*/
