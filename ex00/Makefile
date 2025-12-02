# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teatime <teatime@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 14:51:38 by egache            #+#    #+#              #
#    Updated: 2025/11/14 17:05:23 by teatime          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER := \

# HEAD		:=	\
# include	\

NAME	:=	megaphone

SRC		:=	\
megaphone.cpp

BUILD_DIR	:=	.build
OBJ			:=	$(SRC:%.c=$(BUILD_DIR)/%.o)
DEP			:=	$(OBJ:%.o=.d)

CXX			:=	c++
CXXFLAGS	:=  -Wall -Wextra -Werror -std=c++98
INCLUDE		:=	$(addprefix -I,$(HEAD)) -MMD -MP

DIR_DUP		=	mkdir -p $(@D)

MAKEFLAGS	+=	--no-print-directory

RM			:=	rm -f
RMF			:=	rm -rf

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(LIBS_TARGET) $(HEADER)
			$(CC) $(CFLAGS) $(LIBDIR) $(OBJ) $(LIBNAME) -o $(NAME)

$(LIBS_TARGET)	: FORCE
			@$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o:	%.c $(HEADER)
			@echo "Recompilation de $@"
			$(DIR_DUP)
			$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

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
