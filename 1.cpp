#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int ma[3][3]={{1,2,3},
			      {4,5,6},
				  {7,8,9}};
	int mb[3][3];
	
	for(int i = 0; i < 3 ; i++)
		for(int j = 0; j < 3 ; j++) {
			mb[i][j] = ma[j][i];
		}
	printf("%d,%d,%d\n",mb[0][0],mb[0][1],mb[0][2]);
	printf("%d,%d,%d\n",mb[1][0],mb[1][1],mb[1][2]);
	printf("%d,%d,%d\n",mb[2][0],mb[2][1],mb[2][2]);
	return 0;
}
