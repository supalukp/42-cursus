# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rose <rose@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 15:28:49 by rose              #+#    #+#              #
#    Updated: 2024/11/11 15:33:34 by rose             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAG = -Wall -Werror -Wextra
SRC = *.c
OBJ = *.o

all: $(NAME)

$(OBJ):
	$(CC) $(CFLAG) -c $(SRC)
	
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
	
fclean:
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re