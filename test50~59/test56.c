#include <stdio.h>
void sample(int a, int b){
	if(a>b)
		printf("%d‚Æ%d‚Ì‘å‚«‚¢•û‚Í%d‚Å‚·",a,b,a);
	else if(b>a)
		printf("%d‚Æ%d‚Ì‘å‚«‚¢•û‚Í%d‚Å‚·",a,b,b);
	else
		printf("%d‚Æ%d‚Í“™‚µ‚¢");
}

void main(void){
	int x = 20, y = 40;
	printf("ŠÖ”sample‚ğÀs\n");
	sample(x,y);
}