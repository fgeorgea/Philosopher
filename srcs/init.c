/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:48:13 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:51 by fgeorgea         ###   ########.fr       */
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
	if (argc != 6)
	{
		free(*philo);
		return (0);
	}
	(*philo)->nbr_philo = ft_atoi(argv[1]);
	(*philo)->time_death = ft_atoi(argv[2]);
	(*philo)->time_eat= ft_atoi(argv[3]);
	(*philo)->time_sleep = ft_atoi(argv[4]);
	(*philo)->nbr_eat = ft_atoi(argv[5]);
	return (1);
}
