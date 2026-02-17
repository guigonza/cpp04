# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Guille <Guille@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 07:53:27 by Guille            #+#    #+#              #
#    Updated: 2026/02/17 17:41:03 by Guille           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	recap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = AMateria.cpp MateriaSource.cpp Character.cpp Ice.cpp Cure.cpp main.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
HEADERS = AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp Cure.hpp

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
