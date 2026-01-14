CC = clang
CFLAGS = -std=c99 -Wall -Wextra -g

# Danh sách các file nguồn dựa trên nội dung bạn đã cung cấp
SRCS = main.c reader.c scanner.c parser.c token.c charcode.c error.c
OBJS = $(SRCS:.c=.o)
TARGET = parser

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

# Lệnh chạy nhanh: make run ARGS="parser28.kpl"
run: $(TARGET)
	./$(TARGET) $(ARGS)
