GCC = gcc
main: main.c fibonnacci.c
	$(GCC) $^ -g -lm -o $@ 
