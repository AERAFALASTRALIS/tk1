##
## EPITECH PROJECT, 2020
## make
## File description:
## make
##

NAME = my_defender

FILES = check.c 		\
	tower_script/init_drag.c 	\
	tower_script/print_on_pressed.c 	\
	tower_script/check_pressed.c  	\
	tower_script/on_press.c 			\
	tower_script/check_left.c   		\
	init.c 			\
	moov/my_moov.c 		\
	moov/my_mov.c 		\
	moov/my_mv.c 		\
	moov/my_run_bas.c 	\
	moov/my_run_droit.c 	\
	moov/my_run_gauche.c 	\
	moov/my_run_haut.c 	\
	my_defender.c 		\
	my_put_nbr.c 		\
	my_sprite.c 		\
	tour.c			\
	menu.c			\

FLAGS =  -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

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
