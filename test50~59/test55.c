#include <stdio.h>
void sample(int a){
	printf("�l��%d�ł�\n", a);
}

void main(void){
	int a = 50;
	sample(20);
	printf("main��%d�̒l=%d", a);
}
