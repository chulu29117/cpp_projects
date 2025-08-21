# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clu <clu@student.hive.fi>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 15:58:20 by clu               #+#    #+#              #
#    Updated: 2025/08/21 16:39:11 by clu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

STD = -std=C++11

SRCS = megaphone.cpp

all: $(NAME)

$NAME: $(SRCS)
	@c++ $(CFLAGS) $(STD) -o $(NAME) $(SRCS)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: all clean re