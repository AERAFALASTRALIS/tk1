##
## EPITECH PROJECT, 2020
## make
## File description:
## make
##

NAME = tail

FILES = lines.c 	\
	main.c 		\
	my_strcmpy.c 	\
	my_str_to_tab.c	\
	get_next_line.c

FLAGS =

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES) $(FLAGS)

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
