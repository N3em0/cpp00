# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egache <egache@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 14:51:38 by egache            #+#    #+#              #
#    Updated: 2025/12/09 11:38:04 by egache           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	:=	phonebook

SRC_DIR := src
BUILD_DIR	:=	.build
INC_DIR := includes

SRC_FILES		:=	\
Contact.cpp \
Phonebook.cpp \
main.cpp \

SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ			:=	$(SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEP			:=	$(OBJ:%.o=.d)

CXX			:=	c++
CXXFLAGS	:=  -Wall -Wextra -Werror -g3 -std=c++98
INCLUDE		:=	-I$(INC_DIR) -MMD -MP

MAKEFLAGS	+=	--no-print-directory

RM			:=	rm -f
RMF			:=	rm -rf
DIR_DUP		=	mkdir -p $(@D)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)


$(BUILD_DIR)/%.o:	$(SRC_DIR)/%.cpp
			@echo "Recompilation de $@"
			$(DIR_DUP)
			$(CXX) $(CXXFLAGS) $(INCLUDE) -c -o $@ $<

-include $(DEP)

clean:
			$(RM) $(OBJ) $(DEP)
			$(RMF) $(BUILD_DIR)

fclean:	clean
			$(RM) $(NAME)

re:
			$(MAKE) fclean
			$(MAKE) all


FORCE :

.PHONY:	all clean fclean FORCE re
