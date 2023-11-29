#include <stdio.h>

int main() {
    int rows = 5;
    int count = 1;
    char ch = 'A';
    int i,j;

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < 5; j++) {
            if (i % 2 == 0) {
                printf("%d ", count);
                count++;
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
