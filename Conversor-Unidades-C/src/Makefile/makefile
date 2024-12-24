CC = gcc
CFLAGS = -Wall -Wextra -g3
SRC = src/main.c src/conversao.c  # Adicione conversao.c aqui
OBJ = (SRC:.c=.o)
EXEC = conversor

all:(EXEC)

(EXEC):(OBJ)
	(CC)(OBJ) -o (EXEC)

.c.o:(CC) (CFLAGS) -c< -o @

clean:
	rm -f(OBJ) (EXEC)

run:(EXEC)
	./$(EXEC)