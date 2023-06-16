/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:48:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/11 19:19:54 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

t_philo	*init_struct(void)
{
	t_philo	*philo;

	philo = malloc(sizeof(t_philo));
	if (!philo)
		return (NULL);
	philo->nbr_philo = 0;
	philo->time_death = 0;
	philo->time_eat = 0;
	philo->time_sleep = 0;
	philo->nbr_eat = 0;
	return (philo);
}

int	init_values(int argc, char **argv, t_philo **philo)
{
	int	overflow;

	if (argc != 6 && argc != 5)
	{
		ft_putstr_fd("Args should be: nbr_philo, time_to_die, time_to_eat, time_to_sleep, (nbr_eat)", 2);
		return (0);
	}
	overflow = 0;
	overflow += ft_atoi(argv[1], &(*philo)->nbr_philo);
	overflow += ft_atoi(argv[2], &(*philo)->time_death);
	overflow += ft_atoi(argv[3], &(*philo)->time_eat);
	overflow += ft_atoi(argv[4], &(*philo)->time_sleep);
	overflow += ft_atoi(argv[5], &(*philo)->nbr_eat);
	if (overflow != 5)
	{
		ft_putstr_fd("Argument has overflow\n", 2);
		return (0);
	}
	else if (((*philo)->nbr_philo <= 0) || ((*philo)->time_death <= 0) || ((*philo)->time_eat <= 0) || ((*philo)->time_sleep <= 0) || ((*philo)->nbr_eat <= 0))
	{
		ft_putstr_fd("Arg cannot have 0 or negative number as a value\n", 2);
		return (0);
	}
	return (1);
}
