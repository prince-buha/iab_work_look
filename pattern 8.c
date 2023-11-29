#include <stdio.h>

int main() {
	int i,j;
    int rows = 5; 
    int columns = 5; 
    int count = 1; 
    char ch = 'A'; 

    for (i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            if (j % 5 == 0) {
                printf("%-4d", count);
                count++;
            } else if (j % 5 == 2) {
                printf("%-4c", ch); 
                ch++;
            } else {
                printf("    "); 
            }
        }
        printf("\n"); 
    }

    
}
