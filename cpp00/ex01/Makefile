CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
HEADER = $(wildcard *.hpp)
NAME = PhoneBook

%.o: %.cpp Makefile $(HEADER)*
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)