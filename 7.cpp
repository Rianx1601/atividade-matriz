#include <stdio.h>
#define l 3
#define c 3

void ident(int a[][3], int ind[][3], int area) {
    int i, j;
    
    for (i = 0; i < area; i++) {
        for (j = 0; j < area; j++) {
            if (i == j) ind[i][j] = 1;
            else ind[i][j] = 0;
        }
    }
}

void diag(int arm[][3],int a[][3],int area) {
	int m_ident[l][c];
	ident(a,m_ident,area);
	
	for(int i = 0;i < area;i++){
		for(int j = 0; j < area;j++) {
			arm[i][j] = 0;	
			for(int p = 0;p < area;p++) arm[i][j] += m_ident[p][j] * a[i][p] * m_ident[p][j];
		}
	}
}

int main() {
	
	
    int ma[l][c] = {{2, 0, 0}, {0, 4, 0}, {0, 0, 6}};
    int mb[l][c], i, j;
    
    diag(mb,ma,3);
    
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", ma[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", mb[i][j]);
        printf("\n");
    }
    printf("\n");
       
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == j) printf("%d ", mb[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    
    printf("\n");
    
  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
        	if(i == 0 && j == 2) printf("%d ", mb[i][j]);	
        	else if(i == 1 && j == 1) printf("%d ", mb[i][j]);	
        	else if(i == 2 && j == 0) printf("%d ", mb[i][j]);	
        	else printf("- ");
		} 
        printf("\n");
    }
    return 0;
}
