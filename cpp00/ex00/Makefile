NAME = megaphone

SRCS = megaphone.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) -Wall -Wextra -g -Werror  -std=c++98 -o $(NAME)

$(OBJS): %.o:%.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all