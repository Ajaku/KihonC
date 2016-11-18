#include <stdio.h>
void setzero(char a[], int b){

}
void main(void){
	int a[3] = {1,2,3};
	setzero(a,1);
	printf("a[3]");
}

void sample(char c[],int a){
	int i;
	for(i=0; i<a; i=i+1){
		printf("%s",c);
	}
	printf("\n");
}