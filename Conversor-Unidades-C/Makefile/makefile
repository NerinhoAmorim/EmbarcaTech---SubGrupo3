# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -g3

# Arquivos fonte e objeto
SRC = src/main.c \
      src/conversao_comprimento.c \
      src/conversao_massa.c \
      src/conversao_volume.c \
      src/conversao_temperatura.c \
      src/conversao_velocidade.c \
      src/conversao_potencia.c \
      src/conversao_area.c \
      src/conversao_tempo.c \
      src/conversao_dados.c  # Adicione todos os arquivos .c necessários
OBJ = $(SRC:.c=.o)

# Nome do executável
EXEC = conversor

# Regra padrão
all: $(EXEC)

# Regra para criar o executável
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Regra para compilar arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	rm -f $(OBJ) $(EXEC)

# Executar o programa
run: $(EXEC)
	./$(EXEC)
