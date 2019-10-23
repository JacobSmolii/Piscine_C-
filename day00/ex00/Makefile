# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 12:24:13 by vsmolii           #+#    #+#              #
#    Updated: 2019/10/21 12:57:20 by vsmolii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
GCCW = clang++ -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(GCCW) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJ);

fclean: clean
	/bin/rm -f $(NAME);

re: fclean all
