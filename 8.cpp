#include <stdio.h>
#define l 2
#define c 2

void ident(int a[][2], int ind[][2], int area) {
    int i, j;
    
    for (i = 0; i < area; i++) {
        for (j = 0; j < area; j++) {
            if (i == j) ind[i][j] = 1;
            else ind[i][j] = 0;
        }
    }
}

int main() {
	
    int ma[2][2] = {{1, 2}, {3, 4}};
    int mb[2][2],i,j;
    
    ident(ma, mb, 2);
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", ma[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) printf("%d ", mb[i][j]);
        printf("\n");
    }
    
    return 0;
}
