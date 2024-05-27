NAME = whatever

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = main.cpp
		
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CCXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

s:
	@make r
	@./whatever
	@make f

r:re
c:clean
f:fclean