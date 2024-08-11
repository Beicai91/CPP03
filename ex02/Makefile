NAME = FragTrap
CXX = g++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98
H_PATH = -I.
SRCS = ClapTrap.cpp \
	   ScavTrap.cpp \
	   FragTrap.cpp \
	   main.cpp
OBJS = $(patsubst %.cpp,$(ODIR)/%.o,$(SRCS))
ODIR = ofiles
SUCCESS = $(GREEN)✔$(RESET)

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:$(NAME)

$(NAME):$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@printf "$(SUCCESS) $(GREEN) Executable ready$(RESET)\n"

$(OBJS):$(ODIR)/%.o:%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) $(H_PATH) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@printf "$(YELLOW)Object files removed$(RESET)\n"

fclean:clean	
	@rm -f $(NAME)
	@printf "$(YELLO)Executable removed$(RESET)\n"

re:fclean all

.PHONY:all clean fclean re

