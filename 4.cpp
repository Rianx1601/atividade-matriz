#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int ma[2][2]={{2,3},
			      {1,4}};
	int mb;
	
	mb = (ma[0][0] * ma[1][1]) - (ma[0][1] * ma[1][0]);
	
	printf("%d\n",mb);

	return 0;
}
