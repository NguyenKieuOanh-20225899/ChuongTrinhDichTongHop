CC ?= clang
CFLAGS ?= -std=c99 -Wall -Wextra -Wpedantic -g
LDFLAGS ?=

TARGET ?= kplc
EXE := $(TARGET)
ifeq ($(OS),Windows_NT)
EXE := $(TARGET).exe
endif

# Danh sách các file .c hiện có trong thư mục của bạn
SRCS := main.c reader.c scanner.c parser.c token.c symtab.c semantics.c charcode.c error.c debug.c
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
