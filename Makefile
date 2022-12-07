GREEN = \033[0;92m
DEFAULT = \033[0;39m

CC	= clang
NAME = $(CLIENT) $(SERVER)

SERVER_SRCS	= server.c minitalk_utils.c
SERVER_OBJECTS = $(SERVER_SRCS:.c=.o)

CLIENT_SRCS = client.c minitalk_utils.c
CLIENT_OBJECTS = $(CLIENT_SRCS:.c=.o)

SERVERB_SRCS	= server_bonus.c minitalk_utils_bonus.c
SERVERB_OBJECTS = $(SERVERB_SRCS:.c=.o)

CLIENTB_SRCS = client_bonus.c minitalk_utils_bonus.c
CLIENTB_OBJECTS = $(CLIENTB_SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror 

SERVER = server
CLIENT = client

SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

all: $(NAME)

.o .c:	
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

${CLIENT}: $(CLIENT_OBJECTS) 
		$(CC) $(CFLAGS) -o $@ $^ 
		@echo "$(GREEN)Created ${CLIENT} $(DEFAULT)."
${SERVER}: $(SERVER_OBJECTS) 
		$(CC) $(CFLAGS) -o $@ $^
		@echo "$(GREEN)Created ${SERVER} $(DEFAULT)."

${CLIENT_BONUS}: $(CLIENTB_OBJECTS) 
		$(CC) $(CFLAGS) -o $@ $^ 
		@echo "$(GREEN)Created ${CLIENT_BONUS} $(DEFAULT)."
${SERVER_BONUS}: $(SERVERB_OBJECTS) 
		$(CC) $(CFLAGS) -o $@ $^
		@echo "$(GREEN)Created ${SERVER_BONUS} $(DEFAULT)."

clean:
		rm -rf $(SERVER_OBJECTS) $(CLIENT_OBJECTS) $(SERVERB_OBJECTS) $(CLIENTB_OBJECTS) 

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

fclean:	clean
		rm -rf server client server_bonus client_bonus

re: fclean all

.PHONY: all re clean fclean
