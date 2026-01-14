# 1. Trình biên dịch (Dùng clang cho macOS hoặc gcc cho Linux/Windows)
CC = clang

# 2. Các cờ biên dịch:
# -std=c99: Sử dụng chuẩn C99
# -Wall -Wextra: Hiển thị đầy đủ các cảnh báo lỗi
# -g: Hỗ trợ gỡ lỗi (debug)
CFLAGS = -std=c99 -Wall -Wextra -g

# 3. Tên tệp thực thi đầu ra
TARGET = symtab

# 4. Danh sách các tệp nguồn .c cần thiết (Dựa trên nội dung bạn đã tải lên)
SRCS = main.c reader.c scanner.c parser.c token.c symtab.c charcode.c error.c debug.c
OBJS = $(SRCS:.c=.o)

# --- CÁC LUẬT BIÊN DỊCH (RULES) ---

# Luật mặc định: Tạo tệp thực thi
all: $(TARGET)

# Liên kết các tệp đối tượng (.o) để tạo file thực thi
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Biên dịch từng tệp nguồn (.c) thành tệp đối tượng (.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Lệnh dọn dẹp các tệp tạm và tệp thực thi
clean:
	rm -f $(OBJS) $(TARGET)

# Lệnh chạy nhanh với tham số tệp test: make run ARGS="tests/example1.kpl"
run: $(TARGET)
	./$(TARGET) $(ARGS)
#./symtab tests/example1.kpl
