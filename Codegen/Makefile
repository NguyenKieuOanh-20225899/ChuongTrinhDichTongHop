CC ?= clang
CFLAGS ?= -std=c99 -Wall -Wextra -Wpedantic -g
LDFLAGS ?=

TARGET ?= kplc
EXE := $(TARGET)
ifeq ($(OS),Windows_NT)
EXE := $(TARGET).exe
endif

SRCS := main.c reader.c scanner.c parser.c token.c symtab.c semantics.c codegen.c charcode.c error.c debug.c instructions.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean run

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(EXE)
	./$(EXE) $(ARGS)

clean:
	rm -f $(OBJS) $(EXE) $(TARGET)
