NAME		=	span

SRC			=	main.cpp Span.cpp

CC			=	c++

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all:		$(NAME)

clean:
			${RM} $(NAME)

fclean: 	clean

re:			fclean all

.PHONY:		all clean fclean re