# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 17:02:11 by okapshai          #+#    #+#              #
#    Updated: 2024/12/11 11:51:55 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = \
		megaphone.cpp
		
OBJS = $(SRCS:.cpp=.o)

CXX 		:= c++
CXXFLAGS 	:= -Wall -Wextra -Werror -std=c++98
RM 			:= rm -rf

GREEN = '\033[0;32m'
CYAN = '\033[0;36m'
WHITE = '\033[0;37m'

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo ✅ $(GREEN)"Project successfully compiled"

clean:
	@echo 🧹 $(CYAN)"Removing .o files"$(WHITE)
	${RM} $(OBJS)

fclean: clean
	@echo 🧹 $(CYAN)"Removing all"$(WHITE)
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re
