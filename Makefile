# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 13:19:10 by mcallejo          #+#    #+#              #
#    Updated: 2024/02/12 13:40:30 by mcallejo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS#
GREEN = \033[1;92m
RED = \033[1;91m
NC = \033[0m
YELLOW=\033[1;93m

NAME = push_swap

SOURCES = main.c push_swap_argv_checker.c utils_lists.c utils_push_swap.c \
	instructions.c radix_sort.c

OBJECTS = $(SOURCES:%.c=%.o)

CC = gcc #-fsanitize=address
CFLAGS = -Wall #-Werror -Wextra

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "$(YELLOW)Compiling..  $(NC)$(patsubst $(DIR_BUILD)%,%,$@)"

all: $(NAME)

$(NAME): $(OBJECTS) 
	@$(CC) $(OBJECTS) $(CFLAGS) -o $(NAME)
	@echo "$(GREEN)PUSH_SWAP DONE$(END)"
	
clean:
	@rm -rf $(OBJECTS) 
	@echo "$(RED)OBJECTS DELETED$(END)"

fclean: clean
	@rm -rf $(NAME)	
	@echo "$(RED)EXEC DELETED $(END)"


re: fclean all

.PHONY: all clean fclean re
