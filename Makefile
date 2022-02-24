# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:20:12 by tnamir            #+#    #+#              #
#    Updated: 2022/02/16 18:20:12 by tnamir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMMANDS = ./commands/sa.c ./commands/sb.c ./commands/pa.c ./commands/pb.c ./commands/rra.c ./commands/rrb.c ./commands/ra.c ./commands/rb.c

TOOLS = ./tools/ft_atoi.c ./tools/errors_checker.c ./tools/ft_split.c ./tools/ft_substr.c ./tools/ft_strlen.c ./tools/ft_strjoin.c ./tools/ft_strdup.c ./tools/sorted_checker.c

CASES = ./cases/all_cases.c ./cases/case3.c ./cases/case5.c ./cases/case100.c ./cases/case500.c ./cases/sorted_pointer.c ./cases/indexof.c

HEADERS = ./cases/cases.h ./commands/commands.h ./tools/tools.h

SRC = push_swap.c $(COMMANDS) $(TOOLS) $(CASES)

NAME = push_swap

all : $(NAME)

$(NAME) : $(HEADERS)
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean :
	@rm -rf push_swap

fclean : clean

re : fclean all

.PHONY : clean re fclean all