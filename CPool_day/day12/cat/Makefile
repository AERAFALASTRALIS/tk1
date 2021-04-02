##
## EPITECH PROJECT, 2019
## compilation
## File description:
## with makefile
##

BIN	=	cat

all:	$(BIN)

$(BIN):
	make re -C lib/my
	gcc cat.c -o $(BIN) -I./include -L./lib -lmy

clean:
	make clean -C lib/my

fclean:
	make fclean -C lib/my
	rm cat

re:
	make
