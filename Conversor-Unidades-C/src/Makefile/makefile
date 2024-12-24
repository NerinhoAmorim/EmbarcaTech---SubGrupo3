CC = gcc
CFLAGS = -Wall -Wextra -g3 -I./src/include  # Caminho para os cabeçalhos
SRC = src/main.c src/conversao.c tests/teste-conversao.c  # Inclua conversao.c
OBJ = (SRC:.c=.o)
EXEC = conversor

all:(EXEC)

(EXEC):(OBJ)
	(CC)(OBJ) -o (EXEC)

.c.o:(CC) (CFLAGS) -c< -o @

clean:
	rm -f(OBJ) (EXEC)

run:(EXEC)
	./(EXEC)

test:(OBJ)
	(CC)(OBJ) -o test_exe
	./test_exe