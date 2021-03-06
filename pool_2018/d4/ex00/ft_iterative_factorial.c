/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:14:38 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/16 18:11:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;

	a = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	else
	{
		while (a > 1)
		{
			nb = nb * (a - 1);
			a--;
		}
	}
	return (nb);
}
