#include <stdio.h>

int main(){
	
	
	int m1[2][2]={{1,2},
		      {3,4}};
	int m2[2][2]={{5,6},
		      {7,8}};
	int mr[2][2];
	
	for(int i = 0; i < 2 ; i++)
		for(int j = 0; j < 2 ; j++) 
		{
			mr[i][j] = 0;
			for(int k = 0; k <2; k++){
				mr[i][j] += m1[i][k]*m2[k][j];
			}
		}
	
		printf("%d,%d\n",mr[0][0],mr[0][1]);
		printf("%d,%d\n",mr[1][0],mr[1][1]);
	
	return 0;
}
