SOURCES = 	main.c
OBJECTS =	$(SOURCES:.c=.o)
HEADER = 	minishell.h
CC = 		gcc
NAME =		minishell
FLAGS =		-Wall -Wextra -Werror
INCLUDES =  -I hdr/ -I libs/libft
VPATH = 	obj:src:hdr:libs/libft
LIBS =		-lreadline -L./libs/libft -lft
LIBFT = 	./libs/libft/libft.a


.PHONY:		all re clean fclean

all:		$(LIBS) $(NAME)

$(NAME):	$(OBJECTS) $(LIBS)
			$(CC) $(FLAGS) $(INCLUDES) $(addprefix obj/,$(OBJECTS)) $(LIBS) -o $@

%.o:		%.c $(HEADER)
			@mkdir -p obj
			$(CC) $(FLAGS) $(INCLUDES) $< -c -o obj/$@

$(LIBS):	
			@make -C libs/libft

clean:		
			rm -rf obj/

fclean:		clean
			@make fclean -C libs/libft
			rm -rf $(NAME)

re:			fclean all
