/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:45:13 by ckula             #+#    #+#             */
/*   Updated: 2020/07/13 15:19:46 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power){
	nb = 2;
	int ret_num = nb;
	int count = 0;

	while(count < power){
		ret_num *= nb;
		count++;
	}
	return ret_num;
}








