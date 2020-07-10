/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:34:54 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/10 12:12:27 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}
void	ft_print_alphabet(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
	ft_putchar('\n');
}
