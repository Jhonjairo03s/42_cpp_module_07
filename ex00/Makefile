# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/21 10:54:08 by jhvalenc          #+#    #+#              #
#    Updated: 2026/10/21 10:54:59 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = whatever

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = main.cpp

OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
