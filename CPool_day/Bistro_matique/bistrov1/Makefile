##
## EPITECH PROJECT, 2019
## compilation
## File description:
## with makefile
##

SRC	=	infin_add.c	\
		infin_sub.c	\
		infin_mult.c	\
		infin_modulo.c	\
		infin_div.c	\

BIN	=	calc

all:	$(BIN)

$(BIN):
	make re -C lib/my
	gcc calc.c $(SRC) -o $(BIN) -I./include -L./lib -lmy

clean:
	make clean -C lib/my

fclean:
	make fclean -C lib/my
	rm calc

re:
	rm calc
	make

debug:
	clear
	make re -C lib/my
	gcc calc.c $(SRC) -o $(BIN) -I./include -L./lib -lmy -Wall -Wextra

valgrind:
	clear
	make re -C lib/my
	gcc -g3 calc.c $(SRC) -o $(BIN) -I./include -L./lib -lmy
