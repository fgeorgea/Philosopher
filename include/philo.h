/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:40:29 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/06/11 19:19:13 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/* --------------------------- INCLUDES --------------------------------*/

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>


/* --------------------------- DEFINES --------------------------------*/

# define MALLOC_FAIL 2
# define BAD_ARGS 3
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define EATING 1
# define SLEEPING 2
# define THINKING 3

/* --------------------------- STRUCTS --------------------------------*/

typedef struct s_philo
{
	int	nbr_philo;
	int	time_death;
	int	time_eat;
	int	time_sleep;
	int	nbr_eat;
}		t_philo;

typedef struct timeval	t_timeval;

/* --------------------------- FUNCTIONS --------------------------------*/

// INIT_C
t_philo		*init_struct(void);
int			init_values(int argc, char **argv, t_philo **philo);

// LIB_UTILS_C
int			ft_atoi(const char *str, int *n);

// TIME_C
size_t	get_time(void);
size_t	get_delta_time(size_t start);

// STR_C
void	ft_putstr_fd(char *str, int fd);

// GET RID OF THAT SHIiiiiiiiiiiiiiiiiiiiiiiiiasdfalksdfjaljsfklasjfkljsflkasjflajsflkajsdfljasdfjt
void	print_struct(t_philo *philo);

#endif