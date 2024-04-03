# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/00/02 16:14:31 by julessainthor     #+#    #+#              #
#    Updated: 2024/04/02 16:37:23 by julessainthor    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = do-op
SRC = srcs/main.c srcs/util.c
HEADER = includes/

all: compile

compile:
		cc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

clean:
		rm -f $(DEST)

re: fclean all
