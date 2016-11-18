#include <stdio.h>

int sample(int a){
	int i, sum=0;
	for(i=0; i<=a; i++){
		sum =sum+i;
	}

	return sum;
}

void main(void){
	int x;
	printf("10‚ðˆø”‚Æ‚µ‚ÄŠÖ”sample‚ðŽÀs\n");
	x = sample(10);
	printf("sample‚Ì–ß‚è’l‚Í%d",x);
}