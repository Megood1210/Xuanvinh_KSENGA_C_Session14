#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "hello world.";
    int count = 0; 
    char *token = strtok(str, " \n");

    while (token != NULL) {
        count++; 
        token = strtok(NULL, " \n"); 
    }
    printf("So tu trong chuoi: %d \n", count);
    return 0;
}

