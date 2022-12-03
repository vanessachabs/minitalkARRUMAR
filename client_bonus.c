#include "client.h"
#include <stdio.h>

void send_char(int server_id, unsigned int c)
{
    int mod;
    int i;
    int status_kill;
    int array[8];

    i = 7;
    while(i >= 0)
    {
        mod = c % 2; // 65 mod 2 = 1; 32 mod 2 = 0...
        array[i--] = mod;//pos 7: 1; pos 6: 0
        c = c / 2; //32; 16; 8; 4;2; 1
    }
    i = 0;
    while(i <= 7)
    {
        if (array[i++] == 1)
            status_kill = kill(server_id, SIGUSR1);
        else
            status_kill = kill(server_id, SIGUSR2);
        if (status_kill == - 1)
            ft_putstr_fd("Error: Failed to send the SIGUSR signal", 1);
        usleep(500);
    }
}

int main(int argc, char **argv)
{
   int server_pid;
   //argv[0] = nomedoprograma
   //argv[1] = pid -> fazer atoi 
   //argv[2] = string -> converter para binario

    if (argc != 3)
    {
        ft_putstr_fd("Error: invalid argument number", 1);
        exit (1);
    }
    server_pid = ft_atoi(argv[1]);
    if (server_pid <= 0)
    {
        ft_putstr_fd("Error: invalid process ID", 1);
        exit (1);
    }
    while (*argv[2])
        send_char(server_pid, *argv[2]++);
    return (0);
}