#include <stdio.h>

void sample(double top, double bottom, double height){
	printf("���%f,����%f,����%f��`�̖ʐς�%f",top,bottom,height/2.0);
}

void main(double a,double b,double c){
	int answer;
	answer=((a+b)*c)/2;
	printf("%d\n",answer);
}