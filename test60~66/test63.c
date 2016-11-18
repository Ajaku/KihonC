#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i, r;
	srand(10);
	for(i=0;i<10000;i++){
		r = rand()%6;
		printf("%d‰ñ–ÚF%d\n",i,r);
	}
}
