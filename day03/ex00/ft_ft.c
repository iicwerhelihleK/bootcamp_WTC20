/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 09:11:15 by ckula             #+#    #+#             */
/*   Updated: 2020/07/11 13:43:19 by ckula            ###   ########.fr       */
/* iii                                                                           */
/* ************************************************************************** */


#include <unistd.h>

void ft_ft(int *nbr){
	*nbr = 42;
}


void ft_putchar(char c){
	write(1, &c, 1);
}


int main(void){
	int nbr; 
	int *ptr1;


	nbr = 1;
	ptr1 = &nbr;

	ft_ft(ptr1);
	ft_putchar( (nbr / 10) + '0');
	ft_putchar((nbr % 10) + '0');

	

	return 0;
}
