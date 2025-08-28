# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clu <clu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 14:23:07 by clu               #+#    #+#              #
#    Updated: 2025/08/28 15:41:55 by clu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC 		= g++
STD 	= -std=c++11
CFLAGS 	= -Wall -Wextra -Werror ${STD}

SRCS = 	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

HEADERS = PhoneBook.hpp \
		  Contact.hpp

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
