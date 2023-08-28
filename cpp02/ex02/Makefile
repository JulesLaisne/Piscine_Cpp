.PHONY:	all clean $(NAME) fclean re mkbuild

CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

BUILD_DIR = build/
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)%.o)
HEADER = $(wildcard *.hpp)
NAME = canon02

all: mkbuild $(HEADER_DIR) $(NAME)

$(BUILD_DIR)%.o: %.cpp Makefile $(HEADER)*
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

mkbuild:
		@mkdir -p build

clean:
	@${RM} $(OBJECTS)
	@${RM} $(BUILD_DIR)

fclean: clean
	@rm -f $(NAME)

re:		fclean all
	$(MAKE) all