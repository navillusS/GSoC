.SILENT:
# -*- Declaraciones -*-
# Compilación
CC		= gcc $(pkg-config --cflags gtk+-3.0) -o window window.c $(pkg-config --libs gtk+-3.0)^C
SRCCC	= window.c
OBJCC	= hello_structs_1.o

# Enlazado
LINKER	= gcc
SRCL	= hello_structs_1.o
BINL	= hello_structs_1

# Utilidades


#RM
ifeq ($(OS),Windows_NT)
	RM = del /Q
else
	RM = rm -rf
endif

# -*- Ejecución -*-
.PHONY: all all-before all-after clean run

all: all-before $(OBJCC) $(BINL) all-after

$(OBJCC): $(GLOBALDEPS)
	$(CC) -c $(SRCCC) -o $(OBJCC)

$(BINL): $(OBJCC)
	$(LINKER) $(SRCL) -o $(BINL)
clean:
	$(RM) $(OBJCC) $(BINL)

run:
	./$(BINL)

