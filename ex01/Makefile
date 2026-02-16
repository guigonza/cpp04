# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Guille <Guille@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 07:53:27 by Guille            #+#    #+#              #
#    Updated: 2026/02/16 14:52:23 by Guille           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	brain
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)
$(NAME): $(OBJDIR) $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
