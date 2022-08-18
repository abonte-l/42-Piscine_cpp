NAME 		=	fixed

SRCS		=	main.cpp			Fixed.cpp				FixedUtils.cpp \
				FixedGetSetter.cpp	FixedArithmetic.cpp		FixedCompar.cpp \
				FixedMinaMax.cpp	FixedIncrDecr.cpp		

HDRS		=	Fixed.hpp		

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

OBJSDIR		=	objs/

OBJS		=	$(addprefix $(OBJSDIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME)	: $(OBJS)
	@$(CXX) -o $(NAME) $(OBJS)
	@echo "Compilation of \033[33;1m$(NAME)\033[0;1m: [\033[1;32mOK\033[0;1m]\033[0m"

$(OBJSDIR)%.o:	%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS) : $(HDRS) Makefile | $(OBJSDIR)

$(OBJSDIR) :
			mkdir $@

clean:
	@rm -rf $(OBJS) $(OBJSDIR)
	@echo "\033[33;1m$(NAME)\033[0;1m: objects deleted\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[33;1m$(NAME)\033[0;1m: $(NAME) deleted\033[0m"

re: fclean all

run: re 
	@./$(NAME)

.PHONY: all clean fclean re run