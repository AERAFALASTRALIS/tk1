##
## EPITECH PROJECT, 2019
## compilation
## File description:
## with makefile
##

BIN	=	infin_add

all:	$(BIN)

$(BIN):
	make re -C lib/my
	gcc infin_add.c -o $(BIN) -I./include -L./lib -lmy

clean:
	make clean -C lib/my

fclean:
	make fclean -C lib/my
	rm infin_add

re:
	make
