#include <stdio.h>

#define l 2
#define c 2

int det(int a[][1]){
	int d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    return d;
}

void co(int a[][c], int cof[][c], int area) {
    int i, j, x, y, k, p;
    int sub_m[1][1];

    for (i = 0; i < area; i++) {
        for (j = 0; j < area; j++) {
            k = 0;
            for (x = 0; x < area; x++) {
                if (x == i) continue;
                p = 0;
                for (y = 0; y < area; y++) {
                    if (y == j) continue;
                    sub_m[k][p] = a[x][y];
                    p++;
                }
                k++;
            }
            cof[i][j] = det(sub_m);
            if ((i+j) % 2 != 0) cof[i][j] *= -1;
        }
    }
}

int main() {
	
    int ma[l][c] = {{2,3},{1,4}};
    int mb[l][c],i,j;
    
    co(ma, mb, 2);
    
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
