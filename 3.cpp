#include <stdio.h>


int main(){
	
	
	float ma[2][2]={{1,2},
			{3,4}};
	float mb, mc[2][2] = {{ma[1][1],-ma[0][1]},{-ma[1][0],ma[0][0]}};
	
	mb = ma[0][0] * ma[1][1] - ma[0][1] * ma[1][0];
	for(int i = 0; i < 2 ; i++)
		for(int j = 0; j < 2 ; j++) {
			mc[i][j] /= mb;
		}
	printf("%.2f,%.2f,\n",mc[0][0],mc[0][1]);
	printf("%.2f,%.2f,\n",mc[1][0],mc[1][1]);
	return 0;
}
