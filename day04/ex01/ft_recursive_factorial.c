/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:26:35 by ckula             #+#    #+#             */
/*   Updated: 2020/07/13 14:42:33 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb){
	if(nb <= 2)
	{
		nb = 1;
		return (ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (0);
	}

}








