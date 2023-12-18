# Nom du compilateur
CC = g++

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Nom de l'exécutable
EXEC = harl

# Fichiers source
SRC = main.cpp Harl.cpp

# Fichiers objet
OBJ = $(SRC:.cpp=.o)

# Règle par défaut
all: $(EXEC)

# Règle pour créer l'exécutable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Règle pour créer le fichier objet
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

