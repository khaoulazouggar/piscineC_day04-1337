/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:34:54 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 05:35:21 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int r;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		r = nb * ft_recursive_power(nb, power - 1);
	return (r);
}
