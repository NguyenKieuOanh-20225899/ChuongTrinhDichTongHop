/* * Reader - File xử lý đọc file đầu vào
 */
#include <stdio.h>
#include <stdlib.h> // Để dùng perror
#include "reader.h"

FILE *inputStream;
int lineNo, colNo;
int currentChar;

int readChar(void) {
    if (inputStream == NULL) {
        currentChar = EOF;
        return currentChar;
    }

    currentChar = fgetc(inputStream);

    if (currentChar == '\n') {
        lineNo++;
        colNo = 0;
    } else {
        colNo++;
    }

    return currentChar;
}

int openInputStream(char *fileName) {
    // IN RA ĐƯỜNG DẪN ĐỂ DEBUG
    printf("DEBUG: Dang co gang mo file: [%s]\n", fileName);

    inputStream = fopen(fileName, "r");

    if (inputStream == NULL) {
        // IN RA LỖI HỆ THỐNG CỤ THỂ
        printf("LOI: fopen tra ve NULL.\n");
        perror("Ly do he thong"); // Hàm này sẽ in ra: No such file, hoặc Permission denied...
        return IO_ERROR;
    }

    lineNo = 1;
    colNo = 0;
    readChar();
    return IO_SUCCESS;
}

void closeInputStream() {
    if (inputStream != NULL)
        fclose(inputStream);
}
