NAME = phonebook

SRCS = main.cpp phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
HEADER = phonebook.hpp

$(NAME): $(OBJS) $(HEADER)
	clang++ $(OBJS) -Wall -Wextra -g -Werror -std=c++98 -o $(NAME)

$(OBJS): %.o:%.cpp $(HEADER)
	clang++ $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all