# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/19 17:33:49 by wintoo            #+#    #+#              #
#    Updated: 2026/03/28 13:05:42 by wintoo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

SRCS		= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
