NAME        =   mutant

SRC         =   main.cpp
OBJ         =   $(SRC:.cpp=.o)

CC          =   c++
RM          =   rm -f

CFLAGS      =   -Wall -Wextra -Werror

$(NAME):    $(OBJ)
	        $(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	        $(CC) $(CFLAGS) -c $< -o $@

all:        $(NAME)

clean:
	        $(RM) $(OBJ)  # Removes only object files

fclean:     clean
	        $(RM) $(NAME)  # Removes the executable

re:         fclean all

.PHONY:     all clean fclean re