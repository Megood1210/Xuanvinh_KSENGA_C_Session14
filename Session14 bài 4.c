#include <stdio.h>
int main() {
    char text[] = "Le Hoang Xuan Vinh";
    char word;
    int count = 0;
    printf("Nhap mot ky tu: ");
    scanf("%c", &word);
    for (int i = 0; text[i] != '\0'; i++){
        if (text[i] == word){
            count++;
        }
    }
    printf("So lan xuat hien cua ky ti %c trong chuoi: %d \n", word, count);
    return 0;
}

