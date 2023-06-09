/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:48:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/09 14:27:20 by fgeorgea         ###   ########.fr       */
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

	if (argc != 6)
	{
		printf("Found %d arguments, expected 5\n", argc - 1);
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
		printf("Argument has overflow\n");
		return (0);
	}
	else if (((*philo)->nbr_philo <= 0) || ((*philo)->time_death <= 0) || ((*philo)->time_eat <= 0) || ((*philo)->time_sleep <= 0) || ((*philo)->nbr_eat <= 0))
	{
		printf("Arg cannot have 0 or negative number as a value\n");
		return (0);
	}
	return (1);
}
