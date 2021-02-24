SRC= SRC/test_case.c\
	SRC/factorial.c\
	SRC/flip.c\
	SRC/ispalindrome.c\
	SRC/isprime.c\
	SRC/reset.c\
	SRC/set.c\
	SRC/strcmp.c\
	SRC/strlen.c\
	SRC/vsum.c

INC= -Iinclude

build: $(SRC)
	gcc $(INC) $(SRC) -o pro.out