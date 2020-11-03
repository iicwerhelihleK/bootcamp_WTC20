
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:47:55 by ckula             #+#    #+#             */
/*   Updated: 2020/07/11 09:10:09 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 3);
}


void ft_print_digits(char x, char y, char z)
{
	ft_putchar(x);
	t_putchar(y);
	ft_putchar(z);

}


void ft_print_comb(void){
	char x = '0', y = '0', z = '0';


	while(x < '9'){

		while(y < '9'){

			while(z < 0){
				ft_print_digits(x, y, z);
				z++;
			}

			 z =  '0';
			 y++;
		}

		 y = '0';
		 x++;
		 
	}

}


int main(){
	ft_print_comb();
	return 0;
}
