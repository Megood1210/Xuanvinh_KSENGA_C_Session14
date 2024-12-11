#include <stdio.h>
int main(){
    char text[] = "Xuan Vinh";
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c ", text[i]);
    }
    return 0;
}

