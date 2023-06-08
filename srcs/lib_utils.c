/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:58:19 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/08 12:59:52 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"


static int	ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

const char	*ft_getsign(const char *str, int *is_neg)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int			is_neg;
	long int	nbr;
	long int	tmp;

	is_neg = 1;
	if (!str)
		return (0);
	is_neg = 1;
	nbr = 0;
	tmp = 0;
	while (ft_isspace(*str))
		str++;
	str = ft_getsign(str, &is_neg);
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - 48;
		if (nbr < tmp && is_neg == 1)
			return (-1);
		if (nbr < tmp && is_neg == -1)
			return (0);
		tmp = nbr;
		str++;
	}
	return ((int)(nbr * is_neg));
}
