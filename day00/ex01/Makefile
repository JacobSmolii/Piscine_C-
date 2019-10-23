# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsmolii <vsmolii@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 18:25:20 by vsmolii           #+#    #+#              #
#    Updated: 2019/10/22 18:35:47 by vsmolii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook
SRC = contact_class.cpp search_print_class.cpp main.cpp
GCCW = clang++ -Wall -Werror -Wextra
all: $(NAME)

$(NAME): $(OBJ)
	$(GCCW) $(SRC) -o $(NAME)

clean:
	@/bin/rm $(NAME);

fclean: clean
	@/bin/rm -f $(NAME);

re: fclean all
