/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 03:59:58 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 05:34:50 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	i = power;
	r = 1;
	if (i < 0)
		return (0);
	else if (i == 0)
		return (1);
	else
	{
		while (i > 0)
		{
			r *= nb;
			i--;
		}
		return (r);
	}
}
