NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp 

Obj = $(SRC:.cpp=.o)

FLAGS= -std=c++98 -Wall -Wextra -Werror

HEADER = ClapTrap.hpp

CC = c++

all : $(NAME)

$(NAME): $(Obj)
	$(CC) $(FLAGS) $(Obj) -o $(NAME)  

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

re:fclean all

clean:
	rm -rf $(Obj)

fclean:clean
	rm -rf $(NAME)

.PHONY:
	clean fclean all