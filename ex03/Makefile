INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

SRC =  main.cpp, Weapon.cpp, HumanA.cpp, HumanB.cpp

NAME = Unnecessary_violence

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -g -Wall -Werror -Wextra -MMD

CC = c++

DEP	=	$(OBJ:.o=.d)

%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

all		: $(NAME)

$(NAME)	:  $(OBJ) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)
	rm -rf $(DEP)
fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY: all clean fclean re