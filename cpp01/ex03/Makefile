# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clu <clu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 16:07:31 by clu               #+#    #+#              #
#    Updated: 2025/09/02 16:18:33 by clu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CC 		= g++
STD 	= -std=c++11
CFLAGS 	= -Wall -Wextra -Werror ${STD}

SRCS = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

HEADERS = Weapon.hpp \
		  HumanA.hpp \
		  HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(STD) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all	

.PHONY: all clean fclean re
