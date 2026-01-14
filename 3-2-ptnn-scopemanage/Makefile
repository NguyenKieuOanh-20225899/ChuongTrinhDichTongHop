# 1. Khai báo trình biên dịch
CC = clang

# 2. Cờ biên dịch:
# -g: hỗ trợ debug
# -Wall: hiển thị tất cả cảnh báo
CFLAGS = -std=c99 -Wall -Wextra -g

# 3. Tên file thực thi đầu ra
TARGET = scope_manage

# 4. Danh sách các file nguồn .c có trong thư mục 3-2-ptnn-scopemanage
SRCS = main.c reader.c scanner.c parser.c token.c symtab.c semantics.c charcode.c error.c debug.c
OBJS = $(SRCS:.c=.o)

# --- CÁC LUẬT (RULES) ---

all: $(TARGET)

# Luật tạo file thực thi
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Luật biên dịch từng file .c thành .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Lệnh dọn dẹp file tạm
clean:
	rm -f $(OBJS) $(TARGET)

# Lệnh chạy nhanh: make run ARGS="tests/example1.kpl"
run: $(TARGET)
	./$(TARGET) $(ARGS)
#./scope_manage tests/example1.kpl
