.PHONY:	all clean $(NAME) fclean re mkbuild

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC_DIR = src/
HEADER_DIR = includes/
BUILD_DIR = build/
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)%.o)
HEADER = $(wildcard $(HEADER_DIR)*.hpp)
NAME = Bureaucrat

all: mkbuild $(HEADER_DIR) $(NAME)

$(BUILD_DIR)%.o: %.cpp Makefile $(HEADER)*
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

mkbuild:
		@mkdir -p build

clean:
	@${RM} $(OBJECTS)
	@${RM} $(BUILD_DIR)

fclean: clean
	@rm -f $(NAME)

re:		fclean all
	$(MAKE) all