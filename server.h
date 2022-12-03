#ifndef SERVER_H
# define SERVER_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "libft/libft.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
#endif