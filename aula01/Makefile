all:
	make obj
	make main
obj:
	gcc -c -o pessoa.o pessoa.c
main:
	gcc main.c ./pessoa.o -o ./exe
exe:
	./exe
