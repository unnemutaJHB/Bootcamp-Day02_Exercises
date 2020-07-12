/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:35:58 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/08 16:26:13 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}
void	ft_print_numbers(void)
{
	char zero = '0';
	while(one <= '9')
	{
		ft_putchar(one);
		one++;
	}
	ft_putchar('\n');
}
