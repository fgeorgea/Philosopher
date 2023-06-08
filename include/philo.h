/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:40:29 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/08 13:12:32 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/* --------------------------- INCLUDES --------------------------------*/

# include <stdio.h>
# include <stdlib.h>

/* --------------------------- DEFINES --------------------------------*/

# define MALLOC_FAIL 2
# define BAD_ARGS 3

/* --------------------------- STRUCTS --------------------------------*/

typedef struct s_philo
{
	int	nbr_philo;
	int	time_death;
	int	time_eat;
	int	time_sleep;
	int	nbr_eat;
}		t_philo;

/* --------------------------- FUNCTIONS --------------------------------*/

// INIT_C
t_philo		*init_struct(void);
int			init_values(int argc, char **argv, t_philo **philo);

// LIB_UTILS_C
int			ft_atoi(const char *str);

// GET RID OF THAT SHIiiiiiiiiiiiiiiiiiiiiiiiiasdfalksdfjaljsfklasjfkljsflkasjflajsflkajsdfljasdfjt
void	print_struct(t_philo *philo);

#endif