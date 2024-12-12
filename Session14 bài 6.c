#include <stdio.h>
int main() {
    char text[] = "Xuan Vinh123";  
    int count = 0;  
    for (int i = 0; text[i] != '\0'; i++) {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
            count++;  
        }
    }
    printf("So luong ky tu la chu cai trong chuoi: %d\n", count);
    return 0;
}

