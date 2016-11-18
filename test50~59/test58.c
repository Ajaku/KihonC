#include <stdio.h>
int sample(int a, int b){
	int c;
	c=a+b;
	return c;
}

int main(void){
	int sum, x=10, y=7;
	sum = sample(x,y);
printf("%d‚Æ%d‚ð‘«‚·‚Æ%d‚Å‚·\n",x ,y ,sum );
return 0;
}