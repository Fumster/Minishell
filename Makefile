SOURCES = 		main.c sighandler.c
OBJECTS =		$(SOURCES:.c=.o)
HEADER = 		minishell.h
CC = 			gcc
NAME =			minishell
FLAGS =			-Wall -Wextra -Werror
INCLUDES =  	-I hdr/ -I libs/libft
VPATH = 		obj:src:hdr:libs/libft:src/signal
LIBINCLUDES =	-lreadline -L./libs/libft -lft
LIBS = 			./libs/libft/libft.a


.PHONY:		all re clean fclean

all:		$(LIBS) $(NAME)

$(NAME):	$(OBJECTS) $(LIBS)
			$(CC) $(FLAGS) $(addprefix obj/,$(OBJECTS)) $(LIBINCLUDES) -o $@

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
