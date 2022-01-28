MAKE = make

LIBPATH = libft

LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRC_FILES = ft_printf.c utils.c convert.c

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I /includes

SRC_PATH = srcs/

AR = ar rcs

RM = rm -rf

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

OBJS = $(SRCS:.c=.o)

D_OBJS = *.o

$(NAME): 
		$(OBJS)
		$(MAKE) -C $(LIBPATH)
		cp $(LIBFT) $(NAME)
		$(CC) $(FLAGS) $(INCLUDES) $(SRC)
		$(AR) $(NAME) $(D_OBJS)

all: $(NAME)

clean:  
		$(RM) $(D_OBJS)
		$(MAKE) clean -C $(LIBPATH)

fclean: clean 
		$(MAKE) fclean -C $(LIBPATH)
		$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean re