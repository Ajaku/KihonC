#include <stdio.h>
#include <stdlib.h>
void main(void){
	int i, r;
	int hist[6]={0};
	srand(10);
	for(i=0;i<10000;i++){
		r = rand()%6;
		printf("%d‰ñ–Ú%d\n",i ,r);
		hist[r] = hist[r] + 1;
	}
for(i=0;i<6;i++)
	printf("%d‚Ìo–Ú%d",i ,hist[i]);
}