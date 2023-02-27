# **************************************************************************** #
# VARIABLES

NAME				:= ex02

CC					:= c++
CFLAGS				:= -Wall -Wextra -Werror -std=c++98
RM					:= rm -rf
INCS				:= -I .

# **************************************************************************** #
# COLORS

GREEN				:= \033[0;92m
YELLOW				:= \033[0;93m
BLUE				:= \033[0;94m
END_COLOR			:= \033[0;39m

# **************************************************************************** #
# SOURCES

SRC_FILES			:= main.cpp\

OBJ_FILES			:= ${SRC_FILES:.cpp=.o}

# **************************************************************************** #
# RULES

all : $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(INCS) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled :)$(END_COLOR)"
# -C	:	make option that tells make to change directory before execution.
# only the program here is checked against the flags

%.o : %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@^1
# This rule is important to make sure that each object file is checked against the flags;
# -c	:	gcc option to compile each .c file into .o file.
# $<	:	represents the first prerequisite of the rule (each .c file 
#			contained in the src folder).
# -o	:	gcc option to define the name of the program (output) file :
#			"push_swap".
# $@	:	represents the filename of the target of the rule, i.e. each output
#			file which will be linked with the header file.

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	@echo "$(GREEN) Cleaned all and rebuild $(NAME)!$(END_COLOR)"

.PHONY: all clean fclean re
