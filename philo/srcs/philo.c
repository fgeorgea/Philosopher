/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:40:56 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/11 18:38:50 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int argc, char **argv)
{
	t_philo	*philo;

	philo = init_struct();
	if (!philo)
		return (MALLOC_FAIL);
	if (!init_values(argc, argv, &philo))
		return (BAD_ARGS);
	print_struct(philo);
	return (0);
}
