#include <stdio.h>

int main() {
	int i,j;
    int rows = 5; 
    int columns = 5;
    char ch = 'A'; 
    

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            printf("%c ", ch); 
            ch++; 
        }
        printf("\n"); 
    }

    return 0;
}
