LIBFT = libft/libft.a

LIBFT_PATH = ./libft

NAME = libftprintf.a

SRCS =  ft_char_format.c ft_decimal_format.c ft_formats.c ft_hex_format.c \
		ft_is_argument.c ft_itoa_base.c ft_percent_format.c ft_printf.c \
		ft_putchar.c ft_string_format.c ft_unsigned_decimal_format.c \
		ft_void_pointer_format.c 

OBJS =  ${SRCS:.c=.o}

CC = cc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -I

INCLUDES = ./ft_printf.h

$(NAME): $(OBJS)
	$(MAKE) -C ${LIBFT_PATH}
	cp ${LIBFT} $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ${LIBFT_PATH}
	${RM} $(OBJS)

fclean : clean
	$(MAKE) fclean -C ${LIBFT_PATH}
	${RM} $(NAME)

re : fclean all

.PHONY:	all clean fclean re