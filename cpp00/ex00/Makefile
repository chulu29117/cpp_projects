# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clu <clu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 15:58:20 by clu               #+#    #+#              #
#    Updated: 2025/09/03 15:28:53 by clu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC 		= c++
STD 	= -std=c++11
CFLAGS 	= -Wall -Wextra -Werror ${STD}

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(STD) -o $(NAME) $(SRCS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(NAME)
	@echo "Cleaned!"

fclean: clean
	@rm -rf $(NAME)
	@echo "All cleaned!"

re: clean all
	@echo "Rebuilt!"

.PHONY: all clean fclean re