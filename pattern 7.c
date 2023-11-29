int main() {
	int i,j;
    int rows = 5; 
    int columns = 5;

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++) {
            if (i % 2 == 0 && j % 2 == 0)  {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n"); 
    }

    
}
