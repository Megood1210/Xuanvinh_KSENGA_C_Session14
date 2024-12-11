#include <stdio.h>
#include <string.h>
int main() {
    char text[] = "Xuan Vinh";
    int size = strlen(text);
    printf("Chuoi dao nguoc: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    return 0;
}

