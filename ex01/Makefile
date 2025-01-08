# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 17:02:11 by okapshai          #+#    #+#              #
#    Updated: 2024/12/12 17:44:16 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME = phonebook

##############
# SRCS FILES #
##############

# DIRECTORY VARIABLES
SRCS_DIR			:=	src/

# SRCS VARIABLES
SRCS_FILES 			:= \
					main.cpp\
					utils.cpp\
					Contact.cpp\
					Phonebook.cpp 
SRCS				:=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

###############
# INGREDIENTS #
###############

# INC
INC_DIR				:=	includes/

# OBJS
OBJS_DIR			:=	objs/
OBJS				:=	$(SRCS:$(SRCS_DIR)%.cpp=$(OBJS_DIR)%.o)

# FLAGS
CXX 				:= c++
CXXFLAGS			:= -Wall -Wextra -Werror -std=c++98 -g3
INCFLAGS			:=	-I$(INC_DIR)

# BASH FUNCTIONS
RM 					:= rm -rf
DIR_DUP 			:= mkdir -p $(@D)

###########
# COLORS #
###########
GREEN = '\033[0;32m'
CYAN = '\033[0;36m'
WHITE = '\033[0;37m'

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(INCFLAGS) $(OBJS) -o $@
		@echo ✅ $(GREEN)"Project successfully compiled"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@$(DIR_DUP) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) $(INCFLAGS) -c $< -o $@

clean:
	@echo 🧹 $(CYAN)"Removing .o files"$(WHITE)
	${RM} $(OBJS)

fclean: clean
	@echo 🧹 $(CYAN)"Removing all"$(WHITE)
	${RM} $(NAME)
	$(RM) $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
