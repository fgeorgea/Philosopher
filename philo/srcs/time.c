/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:04:04 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/11 19:14:37 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

size_t	get_time(void)
{
	t_timeval	tv;
	size_t		time;

	if (gettimeofday(&tv, NULL) == -1)
		return (0);
	time = (tv.tv_sec * 1000) + (tv.tv_usec / 1000 );
	return (time);
}

size_t	get_delta_time(size_t start)
{
	return (get_time() - start);
}
