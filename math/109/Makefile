##
## EPITECH PROJECT, 2019
## 109titration_2019
## File description:
## Makefile
##

NAME = 109titration

FILES = 109titration.c

all :	$(NAME)

$(NAME):
	gcc -o $(NAME) $(FILES)

fast:
	gcc -Ofast -o $(NAME) $(FILES)

clean:
	rm -f *.o ./*/*.o ./*/*/*.o ./*/*/*/*.o
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
