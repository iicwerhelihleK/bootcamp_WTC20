/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:23:57 by ckula             #+#    #+#             */
/*   Updated: 2020/07/09 13:42:54 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
void ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
*/	

void ft_putchar(char c){
	write(1, &c, 1);

}


void ft_print_alphabet(void){
	int count = 0;

	while(count < 26){
		ft_putchar((char)(97 + count));
		count++;
	}
}


int main(){
	ft_print_alphabet();
	return 0;
}
