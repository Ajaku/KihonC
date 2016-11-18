#include<stdio.h>
int main(){
	int a[6] = {2,4,6,8,10,12},b[6];
	int n = 2;
	int y,x;
	scanf("%d",&n);

	for(x = 0;x < 6;x++){
		y = (n + x)%6;
		b[y] = a[x];
	}
	for(x = 0;x < 6;x++){
		printf("%d",b[x]);
	}
}