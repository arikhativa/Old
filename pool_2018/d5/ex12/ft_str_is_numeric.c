/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 10:13:13 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/17 10:15:36 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48)
			return (0);
		if (str[n] > 57)
			return (0);
		n++;
	}
	return (1);
}