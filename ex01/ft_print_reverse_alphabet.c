/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:33:58 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/10 12:13:59 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}
void	ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
