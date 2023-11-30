#include <stdio.h>

int main() {
    int i,j;
    int rows = 5;
    int count = 1;
    

    for (i = 0; i < rows; i++) {
        for ( j = 0; j < 5; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
