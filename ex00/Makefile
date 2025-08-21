CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex00

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -c $(SRC) $(FLAGS)
	$(CPP) -o $(NAME) $^ $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re