#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;
    int i,j;

    for(  i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    
}
