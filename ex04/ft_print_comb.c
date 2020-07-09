/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:01:25 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/09 10:25:49 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}
void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;
	
	num1 = '0';
	while(num1 <= '7')
	{	
		num2 = '1';
		while(num2 <= '8')
		{
			num3 = '2';
			while(num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				ft_putchar(',');
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
