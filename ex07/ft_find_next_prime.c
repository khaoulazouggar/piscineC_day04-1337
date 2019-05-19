/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 01:09:44 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 05:42:10 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int np;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	np = nb + 1;
	while (ft_is_prime(np) != 1)
		np++;
	return (np);
}
