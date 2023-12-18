# Nom du compilateur
CC = g++

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Nom de l'exécutable
EXEC = hiThisIsBrain

# Fichiers source
SRC = main.cpp

# Fichiers objet correspondants
OBJ = $(SRC:.cpp=.o)

# Règle par défaut
all: $(EXEC)

# Règle pour créer l'exécutable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Règle pour créer les fichiers objet
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objet
clean:
	rm -f $(OBJ)

# Nettoyer tout, y compris l'exécutable
fclean: clean
	rm -f $(EXEC)

# Refaire tout
re: fclean all

