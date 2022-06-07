NAME 		=	zombiefier

SRCS		=	main.cpp		newZombie.cpp 		randomChump.cpp \
				Zombie.cpp

HDRS		=	Zombie.hpp

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror #-g -std=c++98 

OBJSDIR		=	objs/

OBJS		=	$(addprefix $(OBJSDIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME)	: $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)
	@echo "Compilation of \033[33;1m$(NAME)\033[0;1m: [\033[1;32mOK\033[0;1m]\033[0m"

$(OBJSDIR)%.o:	%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

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