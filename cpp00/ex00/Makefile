CC := g++
FLAGS := -Wall -Werror -Wextra -std=c++98

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
NAME := megaphone

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)