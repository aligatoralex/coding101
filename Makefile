CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

# Znajdź wszystkie pliki .c w podkatalogach
SOURCES := $(shell find wyklad* -name '*.c')
TARGETS := $(SOURCES:.c=)

.PHONY: all clean help

all: $(TARGETS)
	@echo "✅ Wszystkie programy skompilowane!"

# Kompilacja każdego pliku .c
%: %.c
	$(CC) $(CFLAGS) $< -o $@ -lm

clean:
	@find . -type f -executable -not -name Makefile -delete
	@find . -name "*.o" -delete
	@echo "🧹 Wyczyszczono pliki wykonywalne i obiektowe"

help:
	@echo "Dostępne komendy:"
	@echo "  make         - Kompiluj wszystkie programy"
	@echo "  make clean   - Usuń pliki wykonywalne i .o"
	@echo "  make help    - Pokaż tę pomoc"
