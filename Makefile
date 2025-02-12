NAME			= libftprintf.a

LIBFT 			= libft/libft.a

SRCS 			=	ft_char_format.c ft_decimal_format.c ft_formats.c \
					ft_hex_format.c ft_is_argument.c ft_itoa_base.c \
					ft_percent_format.c ft_printf.c ft_putchar.c \
					ft_string_format.c ft_unsigned_decimal_format.c \
					ft_void_pointer_format.c 

OBJS 			=  ${SRCS:.c=.o}

CC 				= cc
RM 				= rm -rf
CFLAGS			= -Wall -Wextra -Werror
AR				= ar rcs

%.o: %.c		
				$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME): 		$(OBJS)
					$(MAKE) -C ./libft
					cp ${LIBFT} $(NAME)
					${AR} $(NAME) $(OBJS)

clean:
				$(MAKE) clean -C ./libft
				${RM} $(OBJS)

fclean:			clean
					$(MAKE) fclean -C ./libft
					${RM} $(NAME)

re: 			fclean all

.PHONY:			all clean fclean re