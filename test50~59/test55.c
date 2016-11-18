#include <stdio.h>
void sample(int a){
	printf("’l‚Í%d‚Å‚·\n", a);
}

void main(void){
	int a = 50;
	sample(20);
	printf("main‚Ì%d‚Ì’l=%d", a);
}
