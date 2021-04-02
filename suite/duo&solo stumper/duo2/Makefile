##
## EPITECH PROJECT, 2019
## CPE_duostumper_2_2019
## File description:
## Makefile
##

NAME = connect4

FILES = affichage.c \
	autre.c \
	error.c \
	interface_play.c \
	my_run.c \
	playeur.c \
	puisancequatre.c

FLAGS = 

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES) $(FLAGS)

fast:
	gcc -Ofast -o $(NAME) $(FILES) $(FLAGS)

clean:
	rm -f *.o ./*/*.o ./*/*/*.o ./*/*/*/*.o
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

prepush:	fclean
	git add --all
	git status

tree:	prepush
	tree -a -I .git

push:	prepush
	git commit -m 'auto-sync with master'
	git push origin master

pull:
	git fetch origin master && git pull origin master

sync:	pull	push

debug:
	clear
	gcc -g3 -o $(NAME) $(FILES) -Wall -Wextra $(FLAGS)

valgrind:
	clear
	gcc -g3 -o $(NAME) $(FILES) $(FLAGS)

update:
	mmkfile $(NAME) "$(FLAGS)"
