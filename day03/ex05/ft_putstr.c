/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:25:56 by ckula             #+#    #+#             */
/*   Updated: 2020/07/16 09:39:07 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void putchar(){char c}

void ft_putstr(char *str){
	int i = 0;

	i = 0;
	while(str[i] != '\0'){
		ft_putchar(str[i]);
		i++;
	}

}



