NAME = minitalk

LIBFT_NAME = libft.a
LIBFT_DIR = ./libft

CLIENT_NAME = client
CLIENT_SRCS = client.c
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

SERVER_NAME = server
SERVER_SRCS = server.c
SERVER_OBJS = $(SERVER_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
LDLIBS = -L$(LIBFT_DIR) -lft

all: $(NAME)

$(NAME): $(CLIENT_NAME) $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(CLIENT_NAME) $(CLIENT_OBJS) $(LDLIBS)

$(SERVER_NAME): $(SERVER_OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(SERVER_NAME) $(SERVER_OBJS) $(LDLIBS)

clean:
	rm -rf $(CLIENT_OBJS)
	rm -rf $(SERVER_OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(CLIENT_NAME)
	rm -rf $(SERVER_NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all $(NAME) clean fclean re
