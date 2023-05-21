CC := g++
FLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
NAME := megaphone

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)