/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:43:14 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/08 16:28:52 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);		
}
void	ft_is_negative(int n)
{
	if(n > 0)
	{
		ft_putchar('P');
	}
	else if(n < 0)
	{
		ft_putchar('N');
	}
	ft_putchar('\n');
}
