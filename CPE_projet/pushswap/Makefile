##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

NAME = push_swap

FILES = my_putsh_swap.c \
	chek.c

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all

prepush:	fclean
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~
	git add --all
	git status
