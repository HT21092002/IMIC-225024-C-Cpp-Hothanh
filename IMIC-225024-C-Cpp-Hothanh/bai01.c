#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    system("chcp 65001 > nul"); // Đặt bảng mã UTF-8 (ẩn output)
    system("cls");

    const char* text = "Changggg ʕっ•ᴥ•ʔっ❤️";
    int text_len = strlen(text);

    for (float y = 1.5f; y > -1.5f; y -= 0.15f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            float a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0f)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Dự đoán chiều rộng terminal trái tim
    int total_width = (int)((1.5f - (-1.5f)) / 0.05f);
    int padding = (total_width - text_len) / 2;

    for (int i = 0; i < padding; i++) printf(" ");
    printf("%s\n", text);

    return 0;
}
