##
## EPITECH PROJECT, 2020
## make
## File description:
## make
##

NAME = navy

FILES = game.c 		\
	get_next_line.c \
	main.c 		\
	map.c 		\
	reader.c 	\
	signal.c 	\
	sign.c 		\
	soft_fonction.c \
	target.c

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
