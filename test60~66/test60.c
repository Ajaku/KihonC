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
	printf("10を引数として関数sampleを実行\n");
	x = sample(10);
	printf("sampleの戻り値は%d",x);
}