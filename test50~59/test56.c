#include <stdio.h>
void sample(int a, int b){
	if(a>b)
		printf("%d��%d�̑傫������%d�ł�",a,b,a);
	else if(b>a)
		printf("%d��%d�̑傫������%d�ł�",a,b,b);
	else
		printf("%d��%d�͓�����");
}

void main(void){
	int x = 20, y = 40;
	printf("�֐�sample�����s\n");
	sample(x,y);
}