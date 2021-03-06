/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:08:44 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/21 12:37:32 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int n;

	a = 1;
	n = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		a = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '+' || *str == '-')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * a);
}
