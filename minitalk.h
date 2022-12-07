#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
#endif

