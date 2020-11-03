/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckula <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:23:52 by ckula             #+#    #+#             */
/*   Updated: 2020/07/13 17:01:21 by ckula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(power != 0)
	{
		return(nb * ft_recursive_power(nb, power -1));
		ft_recursive_power(4,2);
	}
	else
	{
		return 1;
	}

	return nb;
	
}

