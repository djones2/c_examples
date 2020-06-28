#include <stdio.h>
#include <string.h>

int main(void) {
    char userName[3] = "Cat";

    userName[0] = 'B';
    userName[1] = 'i';
    userName[2] = 'l';
    userName[3] = 'l';

    printf("%s\n", userName);

    return 0;
}