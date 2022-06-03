NAME 		=	zombiefier

SRCS		=	main.cpp		newZombie.cpp 		randomChump.cpp\
				Zombie.cpp
CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror #-g -std=c++98 

OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME)	: $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "Compilation of \033[33;1m$(NAME)\033[0;1m: [\033[1;32mOK\033[0;1m]\033[0m"


clean:
	@rm -f $(OBJS)
	@echo "\033[33;1m$(NAME)\033[0;1m: objects deleted\033[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo "\033[33;1m$(NAME)\033[0;1m: $(NAME) deleted\033[0m"

re: fclean all

run: re 
	@./$(NAME)

.PHONY: all clean fclean re run