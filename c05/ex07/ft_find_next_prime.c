/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smikci <smikci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:27:57 by smikci            #+#    #+#             */
/*   Updated: 2023/09/22 12:20:17 by smikci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb < 0 || nb == 1)
	{
		return (0);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (2);
	}
	else
	{
		while ((nb >= 2))
		{
			if (ft_is_prime(nb))
			{
				return (nb);
			}
			nb++;
		}
	}
	return (0);
}
