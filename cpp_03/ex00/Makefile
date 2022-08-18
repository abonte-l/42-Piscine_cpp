# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 13:13:10 by abonte-l          #+#    #+#              #
#    Updated: 2022/08/18 13:15:04 by abonte-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	claptrap

SRCS		=	main.cpp		ClapTrap.cpp		

HDRS		=	ClapTrap.hpp		

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