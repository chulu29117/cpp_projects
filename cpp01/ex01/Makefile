# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clu <clu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 16:07:31 by clu               #+#    #+#              #
#    Updated: 2025/08/29 16:15:48 by clu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC 		= g++
STD 	= -std=c++11
CFLAGS 	= -Wall -Wextra -Werror ${STD}

SRCS = 	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp

HEADERS = Zombie.hpp

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
