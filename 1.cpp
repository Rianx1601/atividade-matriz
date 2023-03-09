#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int ma[3][3]={{1,2,3},
			      {4,5,6},
				  {7,8,9}};
	int mb[3][3];
	
	for(int i = 0; i < 3 ; i++)
		for(int j = 0; j<3 ; j++) {
			mb[i][j] = ma[j][i];
		}
for(int i = 0; i < 3;i++)
	for(int j = 0; j < 3 ; j++){
		printf("%d .",mb[i][j]);
	}
	return 0;
}
