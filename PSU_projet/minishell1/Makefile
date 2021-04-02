##
## EPITECH PROJECT, 2020
## make
## File description:
## mak
##

NAME = mysh

FILES = base.c		\
	my_acex.c 	\
	sh.c 		\
	outil.c		\
	cd.c		\

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES)

clean:
	rm -f *.o
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
	git pull origin master

sync:	pull	push

debug:
	clear
	gcc -o $(NAME) $(FILES) -Wall -Wextra $(FLAGS)

valgrind:
	gcc -g3 -o $(NAME) $(FILES) $(FLAGS)

update:
	mmkfile.sh   ""
