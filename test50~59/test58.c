#include <stdio.h>
int sample(int a, int b){
	int c;
	c=a+b;
	return c;
}

int main(void){
	int sum, x=10, y=7;
	sum = sample(x,y);
printf("%d��%d�𑫂���%d�ł�\n",x ,y ,sum );
return 0;
}