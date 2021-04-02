##
## EPITECH PROJECT, 2019
## compilation
## File description:
## with makefile
##

BIN	=	eval_expr

all:	$(BIN)

$(BIN):
	make re -C lib/my
	gcc eval_expr.c -o $(BIN) -I./include -L./lib -lmy

clean:
	make clean -C lib/my

fclean:
	make fclean -C lib/my
	rm eval_expr

re:
	make
