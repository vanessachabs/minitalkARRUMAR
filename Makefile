CC	= gcc

SERVER_SRCS	= server.c

CLIENT_SRCS = client.c

CFLAGS	= -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SERVER_OBJECTS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJECTS = $(CLIENT_SRCS:.c=.o)

all = server client

server: $(SERVER_OBJECTS) $(LIBFT)
		 $(CC) -o server $(SERVER_OBJECTS) -L$(LIBFT_PATH) -lft
client: $(CLIENT_OBJECTS) $(LIBFT)
		  $(CC) -o client $(CLIENT_OBJECTS) -L$(LIBFT_PATH) -lft

$(LIBFT):
		make -C $(LIBFT_PATH)

.o .c:
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		rm -rf $(SERVER_OBJECTS) $(CLIENT_OBJECTS)

fclean:	clean
		rm -rf server client

re: fclean all
