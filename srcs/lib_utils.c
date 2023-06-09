/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:58:19 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/09 14:00:12 by fgeorgea         ###   ########.fr       */
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

int	ft_atoi(const char *str, int *n)
{
	int		is_neg;
	long	nbr;

	if (!str)
		return (0);
	is_neg = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	str = ft_getsign(str, &is_neg);
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - 48;
		if (nbr < INT_MIN && is_neg == -1)
			return (-1);
		if (nbr > INT_MAX && is_neg == 1)
			return (-2);
		str++;
	}
	*n = (int)(nbr * is_neg);
	return (1);
}
