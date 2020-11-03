/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:40 by ckula             #+#    #+#             */
/*   Updated: 2020/07/09 16:22:18 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}



void ft_is_negative(int n)
{
	if(n < 0)
	{
		ft_putchar('N');
	}
	else{
		ft_putchar('P');
	}
}


int main(void)
{
	ft_is_negative(-1);
	return 0;
}
