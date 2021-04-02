##
## EPITECH PROJECT, 2019
## makfila
## File description:
## Makefile
##

NAME = bsq

FILES = mainbsq.c \
	my_read.c \
	my_run.c \
	my_strlen.c \
	my_strncpy.c \

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
