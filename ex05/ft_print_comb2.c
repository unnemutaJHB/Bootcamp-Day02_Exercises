/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:21:23 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/10 14:41:10 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c ,1);
}
void    ft_print_comb(void)
{
    char num1;
    char num2;
    char num3;
	char num4;

    num1 = '0';
    while(num1 <= '9')
    {
        num2 = '0';
        while(num2 <= '8')
        {	
	
            num3 = num1;
            while(num3 <= '9')
            {	
				num4 = num2 + 1;
				while(num4 <= '9')
				{
					ft_putchar(num1);
                	ft_putchar(num2);
					ft_putchar(' ');
                	ft_putchar(num3);
					ft_putchar(num4);
                	ft_putchar(',');
					num4++;
				}
				num3++;
			}
			num2++;
          }
		num1++;
	}
}
int main()
{
	ft_print_comb();
	return 0;
}
