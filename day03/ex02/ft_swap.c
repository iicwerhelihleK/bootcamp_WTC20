/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:20:52 by ckula             #+#    #+#             */
/*   Updated: 2020/07/16 09:36:21 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

