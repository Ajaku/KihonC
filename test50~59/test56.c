#include <stdio.h>
void sample(int a, int b){
	if(a>b)
		printf("%dと%dの大きい方は%dです",a,b,a);
	else if(b>a)
		printf("%dと%dの大きい方は%dです",a,b,b);
	else
		printf("%dと%dは等しい");
}

void main(void){
	int x = 20, y = 40;
	printf("関数sampleを実行\n");
	sample(x,y);
}