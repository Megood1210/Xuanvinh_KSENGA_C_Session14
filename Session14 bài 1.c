#include <stdio.h>
#include <string.h>
int main() {
    char text[100];
    printf("Nhap vao chuoi: ");
    fgets(text, 100, stdin); 
    printf("Chuoi vua nhap: %s", text);
    printf("Do dai chuoi: %lu \n", strlen(text) - 1); 
    return 0;
}

