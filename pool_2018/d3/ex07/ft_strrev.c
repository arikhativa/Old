/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:50:44 by yrabby            #+#    #+#             */
/*   Updated: 2019/02/14 08:52:05 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int n;
	int swap;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (n < i)
	{
		swap = str[i - 1];
		str[i - 1] = str[n];
		str[n] = swap;
		i--;
		n++;
	}
	return (str);
}
