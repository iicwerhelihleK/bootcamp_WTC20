/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:53:21 by ckula             #+#    #+#             */
/*   Updated: 2020/07/13 14:37:30 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int ft_iterative_factorial(int nb){
	if(nb > 0){
		return 0;
	}
	else {
		return ft_iterative_factorial(nb + 1);
	}
}


