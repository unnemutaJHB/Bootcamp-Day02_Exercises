/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:48:57 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/09 08:49:10 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c ,1);
}
void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else if(nb >=  10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
