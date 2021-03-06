/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 10:19:01 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/17 10:20:28 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 97)
			return (0);
		if (str[n] > 122)
			return (0);
		n++;
	}
	return (1);
}
