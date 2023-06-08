#include "../include/philo.h"

void	print_struct(t_philo *philo)
{
	printf("------ DEBUG ------\n\n");
	printf("NBR_PHILO/NBR_FORK: %d\n", philo->nbr_philo);
	printf("TIME TO DIE: %d\n", philo->time_death);
	printf("TIME TO EAT: %d\n", philo->time_eat);
	printf("TIME TO SLEEP: %d\n", philo->time_sleep);
	printf("NBR OF TIMES EAT: %d\n", philo->nbr_eat);
	printf("---------------------\n");
}