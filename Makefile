NAME = cub3D

SRC =	src/main.c \
		src/utils.c \
		src/init.c \
		src/color.c \

OBJ = $(SRC:%.c=%.o)

CC = gcc

all : $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -I/usr/include -Imlx -O3 -c $< -o $@


$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -L/usr/lib -Imlx -lXext -lX11 -lm -lz -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : Clean fclean re all
