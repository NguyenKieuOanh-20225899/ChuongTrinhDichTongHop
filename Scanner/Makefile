# 1. Trình biên dịch: Trên Mac nên dùng clang để tránh lỗi thư viện,
# hoặc dùng gcc nếu bạn đã fix xong lỗi environment.
CC = clang

# 2. Các cờ (Flags) biên dịch:
# -c: Chỉ biên dịch sang mã máy (.o) chứ chưa liên kết
# -Wall: Hiện tất cả cảnh báo (Warning) để dễ debug
CFLAGS = -c -Wall

# 3. Tên file chạy đầu ra
TARGET = scanner

# 4. Tự động tìm tất cả các file .c trong thư mục hiện tại
SRCS = $(wildcard *.c)

# 5. Tạo danh sách file .o tương ứng từ file .c
OBJS = $(SRCS:.c=.o)

# --- CÁC LUẬT (RULES) ---

# Luật mặc định: Khi gõ 'make' nó sẽ chạy cái này
all: $(TARGET)

# Luật để tạo ra file chạy (Link các file .o lại với nhau)
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

# Luật để biên dịch từng file .c thành .o
# Dấu % là ký tự đại diện (pattern matching)
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

# Luật dọn dẹp: Gõ 'make clean' để xóa file rác (.o và file chạy)
clean:
	rm -f $(OBJS) $(TARGET)
# ./scanner scanner11.kpl
