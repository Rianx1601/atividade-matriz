#include <stdio.h>
#define l 2
#define c 2

void reflexo(int a[][2], int r[][2], int area) {
    int i, j;
    for (i = 0; i < area; i++) for (j = 0; j < area; j++) r[i][j] = a[i][area-1-j];   
}

int main() {
	
    int ma[l][c] = {{1, 2}, {3, 4}};
    int mb[l][c],i, j;
    
    reflexo(ma, mb, 2);
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", ma[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", mb[i][j]);
        printf("\n");
    }
    
    return 0;
}

