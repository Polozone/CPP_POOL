# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmulin <pmulin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 09:52:14 by pmulin            #+#    #+#              #
#    Updated: 2022/12/02 13:20:39 by pmulin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := exe

CPPFLAGS := -std=c++98

FLAGS := -Wall -Wextra -Werror -MD

SRCS := 	main.cpp \
			ClapTrap.cpp 

OBJS := $(SRCS:.cpp=.o)

DEP    := $(OBJS:.o=.d)

CC := c++

RM := rm -f

all : $(NAME)

%.o : %.cpp
		$(CC) $(CPPFLAGS) $(FLAGS) -c $< -o $@ -fsanitize=address -g3 

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS) -fsanitize=address -g3 

clean :
		$(RM) $(OBJS) $(DEP)

fclean : clean
	$(RM) $(NAME)

re :	fclean all

.PHONY: all clean re fclean bonus

-include $(DEP)
