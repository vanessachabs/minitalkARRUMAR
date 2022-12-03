SHELL = /bin/bash

OPTI_FLAGS = -O3 -march=native

CC	= gcc

SERVER_SRCS	= server.c

CLIENT_SRCS = client.c

CFLAGS	= -Wall -Wextra -Werror -I

INC = minitalk_utils.c

SERVER_OBJECTS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJECTS = $(CLIENT_SRCS:.c=.o)

all = server client

server: $(SERVER_OBJECTS)
		 $(CC) $(CFLAGS) $(SERVER_OBJECTS) -o server 
client: $(CLIENT_OBJECTS)
		  $(CC) -o client $(CLIENT_OBJECTS)

.o .c:
		$(CC) $(CFLAGS) $(OPTI_FLAGS) $(INC) -c $< -o $@
clean:
		rm -rf $(SERVER_OBJECTS) $(CLIENT_OBJECTS)

bonus: all

fclean:	clean
		rm -rf server client

re: fclean all

.PHONY=all re clean fclean  bonus
